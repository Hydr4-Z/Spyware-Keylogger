#include <windows.h>
#include <iostream>

LRESULT CALLBACK MyKeyboardHookProc(int nCode, WPARAM wParam, LPARAM lParam);

HHOOK hHook = nullptr;

int main() {
    
    hHook = SetWindowsHookEx(WH_KEYBOARD_LL, MyKeyboardHookProc, GetModuleHandle(NULL), 0);

    if ( hHook == nullptr ) {
        std::cerr << "Error al instalar el gancho: " << GetLastError() << std::endl;
        return 1;
    }

    std::cout << "Gancho instalado. Presiona 'Esc' para salir." << std::endl;

    while (GetMessage(nullptr, NULL, 0, 0))

    UnhookWindowsHookEx(hHook);
    return 0;
    
}

LRESULT CALLBACK MyKeyboardHookProc(int nCode, WPARAM wParam, LPARAM lParam) { 
    if (nCode >= 0 && wParam == WM_KEYDOWN) { 
        KBDLLHOOKSTRUCT* pKeyboard = (KBDLLHOOKSTRUCT*)lParam;
        std::cout << "Tecla presionada: " << pKeyboard->vkCode << std::endl;

        if (pKeyboard->vkCode == VK_ESCAPE) { 
            PostQuitMessage(0);
        }
    }

    return CallNextHookEx(hHook, nCode, wParam, lParam);
}
