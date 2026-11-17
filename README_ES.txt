AUTOBOT AI — PROYECTO BASE PARA GEODE ANDROID

IMPORTANTE:
Este ZIP es el proyecto fuente inicial, NO es un archivo .geode ni contiene
un binario ARM64 ya compilado. No actives opciones esperando que funcionen:
AutoPlay y Noclip están declarados como ajustes de ejemplo, pero todavía no
tienen implementación de juego.

Objetivo de compilación:
- Geometry Dash Android 2.2081
- Geode para Android ARM64
- Empaquetado final: archivo .geode

Contenido:
- mod.json: identidad del mod y ajustes de ejemplo.
- CMakeLists.txt: configuración inicial de CMake.
- src/main.cpp: punto de entrada del mod.

Para compilar:
1. Necesitas un entorno de compilación de Geode compatible con Android ARM64.
2. Abre el proyecto con el Geode SDK/toolchain correspondiente a tu instalación.
3. Compila y empaqueta con la herramienta oficial de Geode.
4. Instala el .geode resultante desde Geode.

No renombres este ZIP a .geode: no funcionaría.
