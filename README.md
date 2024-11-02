# collection_de_ejercicios_excepciones

https://github.com/flavi13/collection_de_ejercicios_excepciones

1.Los enfoques de bajo nivel: Banderas e interrupciones y tratamiento de los errores en lenguaje C:
-Ejercicio: Implementa un programa en C++ que simule un sistema con banderas de error. Si ocurre un error, en lugar de lanzar una excepción, establece una bandera de error. Luego, comprueba regularmente la bandera de error para manejarla.

2.Las excepciones son más seguras que los errores:
-Ejercicio: Implementa dos versiones de una función que pueda provocar un error (como la división por cero). La primera versión debe manejar el error devolviendo un valor de error, mientras que la segunda versión debe lanzar una excepción en caso de error. Compara la seguridad y facilidad de uso de ambas versiones.
//he creado dos ejecutables en este ejercicio llamados (main2 y main3), el resto de ejercicios están en el primer ejecutable (collection_de_ejercicios_excepciones)

3.Propagación explícita:
-Ejercicio: Crea un programa que demuestre cómo se propaga una excepción a través de varias funciones. Asegúrate de que algunas funciones no manejen la excepción, de modo que tenga que propagarse hasta una función que la maneje.

4.Tipos de excepciones personalizadas: Definición de clases de excepción, Instanciación de clases, Clases de excepción derivadas:
-Ejercicio: Define tus propias clases de excepción que hereden de la clase std::exception. Haz que estas clases representen diferentes tipos de errores que podrían ocurrir en tu programa. Utiliza estas excepciones en tu programa y asegúrate de que se manejan correctamente.

5.Manejo de una excepción y reactivación:
-Ejercicio: Escribe un programa en el que una función lanza una excepción, la cual es manejada en otra parte del programa. Luego, la excepción se relanza para que sea manejada por otro manejador de excepciones.

6.Excepciones no interceptadas:
-Ejercicio: Escribe un programa que lance una excepción que no sea capturada por ningún bloque de catch. Observa lo que sucede cuando se ejecuta el programa.

7.Adquisición de recursos:
-Ejercicio: Implementa una clase que adquiere un recurso (como memoria dinámica o un archivo) en su constructor y libera el recurso en su destructor. Haz que el constructor lance una excepción si no se puede adquirir el recurso. Demuestra que, a pesar de la excepción, no se produce una fuga de recursos.