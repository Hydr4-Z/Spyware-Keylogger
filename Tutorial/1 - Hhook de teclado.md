<h1 align="center"> ¿Que es un HHOOK? </h1> <br>

Para entender fácilmente qué es un keylogger, primero hay que comprender qué es un hook.

Un hook es una técnica que permite interceptar y procesar eventos del sistema antes de que lleguen a su destino final. Estos eventos pueden ser pulsaciones de teclado, clics del ratón o incluso acciones del sistema operativo.

Ejemplo práctico:
Cuando presionas una tecla en tu teclado:

1. El circuito eléctrico del teclado detecta la pulsación y la envía a la computadora.
2. Normalmente, el sistema operativo recibe esta señal y la dirige a la aplicación en uso (como un navegador o procesador de texto).
3. Sin embargo, si instalamos un hook de teclado, podemos interceptar la pulsación antes de que llegue a su destino final.

Esto es precisamente lo que hace un keylogger: usa un hook de teclado para capturar todas las teclas que presionas y almacenarlas sin que te des cuenta.

<br> <br>

<p align="center">
  <img src="https://github.com/user-attachments/assets/0c823c3e-1a15-44ff-bdc1-759c36a6eeaf" alt="Descripción" style="width: 700px; height: auto;">
</p>

<br> <br>

Un HHOOK es un tipo de dato identificador, conocido como handle, que Windows usa para referenciar un hook dentro del sistema.
Aunque HHOOK no es directamente un puntero, está internamente vinculado a una estructura en la memoria del kernel de Windows
que gestiona la configuración y el comportamiento del hook. Esta estructura se inicializa automáticamente cuando el hook es instalado mediante SetWindowsHookEx().
Para utilizar un HHOOK correctamente, es necesario emplear funciones específicas de la API de Windows,
como SetWindowsHookEx, CallNextHookEx y UnhookWindowsHookEx. Además, las funciones de callback asociadas a los hooks deben cumplir con una firma específica, es decir,
deben seguir un formato predefinido por la API para que Windows pueda invocarlas correctamente.

---

**¿Que es un handle?**

Imagina que quieres interceptar el movimiento del ratón, las pulsaciones del teclado o acciones similares en tu computadora.
Para hacerlo, necesitas una forma de referenciar esos eventos sin modificar directamente el código interno del sistema operativo.

Si pudieras acceder y cambiar directamente la memoria o los procesos del sistema sin control, cualquier error podría dañar tu computadora, 
causando pérdida de información o incluso un fallo total del sistema.

Aquí es donde entran los handles. Un handle es un identificador especial que actúa como un "control remoto" para interactuar con los recursos 
internos del sistema sin tocarlos directamente.

En el caso de los hooks (interceptores de eventos), un handle como HHOOK te permite instalar, gestionar y eliminar un hook sin 
afectar el núcleo del sistema. Si algo sale mal, simplemente desactivas o cierras el proceso, y todo vuelve a la normalidad sin daños permanentes.

---
