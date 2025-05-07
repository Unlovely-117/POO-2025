# mi-proyecto-cpp

Este proyecto es una aplicación en C++ que permite seleccionar y jugar diferentes deportes: baloncesto, fútbol y natación.

## Estructura del Proyecto

- **src/**: Contiene los archivos fuente de la aplicación.
  - **main.cpp**: Punto de entrada de la aplicación.
  - **Baloncesto.cpp**: Implementación de la lógica del baloncesto.
  - **Futbol.cpp**: Implementación de la lógica del fútbol.
  - **Natacion.cpp**: Implementación de la lógica de la natación.

- **include/**: Contiene los archivos de encabezado para las clases.
  - **Baloncesto.h**: Declaración de la clase Baloncesto.
  - **Futbol.h**: Declaración de la clase Futbol.
  - **Natacion.h**: Declaración de la clase Natacion.

- **build/**: Directorio para almacenar archivos generados durante la compilación.

- **CMakeLists.txt**: Archivo de configuración para CMake, utilizado para compilar el proyecto.

## Instrucciones para Compilar y Ejecutar

1. Asegúrate de tener CMake instalado en tu sistema.
2. Navega al directorio del proyecto:
   ```
   cd mi-proyecto-cpp
   ```
3. Crea un directorio de compilación y navega a él:
   ```
   mkdir build
   cd build
   ```
4. Ejecuta CMake para configurar el proyecto:
   ```
   cmake ..
   ```
5. Compila el proyecto:
   ```
   make
   ```
6. Ejecuta la aplicación:
   ```
   ./mi-proyecto-cpp
   ```

## Notas

- Asegúrate de que todos los archivos fuente y de encabezado estén correctamente implementados para que la aplicación funcione como se espera.
- Puedes modificar el código según tus necesidades y agregar más deportes si lo deseas.