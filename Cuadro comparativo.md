# Make vs CMake — Cuadro Comparativo


| Característica | Make | CMake |
|---|---|---|
| Tipo | Sistema de build directo | Meta-sistema de build |
| Archivo de configuración | `Makefile` | `CMakeLists.txt` |
| Portabilidad | Linux / macOS | Linux, macOS, Windows |
| Curva de aprendizaje | Baja | Media-Alta |
| Instalación | Disponible por defecto en Unix | Requiere instalación adicional |
| Escalabilidad | Proyectos pequeños/medianos | Proyectos medianos/grandes |

---

## Cualidades

| Aspecto | Make | CMake |
|---|---|---|
| Sintaxis | Directa: objetivo, dependencias y comandos shell | Lenguaje propio más abstracto y expresivo |
| Detección de entorno | Manual | Automática (compilador, plataforma, bibliotecas) |
| Control de compilación | Total y explícito | Delegado al generador |
| Builds fuera del árbol | No nativo | Sí (`mkdir build && cd build && cmake ..`) |
| Soporte IDE | Limitado | CLion, Visual Studio, VS Code, Xcode |

---

## Ventajas

### ✅ Make
- Presente en casi cualquier sistema Unix/Linux sin instalación extra
- Configuración rápida para proyectos simples
- Control absoluto de cada paso del proceso de compilación
- Fácil integración con cualquier herramienta de shell
- Reconstrucción incremental basada en timestamps
- Targets `.PHONY` para automatizar tareas arbitrarias (`build`, `run`, `clean`, `test`)

### ✅ CMake
- Multiplataforma: genera Makefiles, Ninja, proyectos MSVC, entre otros
- `find_package()` localiza dependencias del sistema automáticamente
- Targets modernos con propiedades (`target_link_libraries`, `target_include_directories`)
- CTest y CPack integrados para testing y empaquetado
- Muy usado en proyectos profesionales y de código abierto
- Mejor manejo de proyectos con múltiples subdirectorios y módulos

---

## Debilidades

### ❌ Make
- No es portable a Windows sin adaptaciones (MinGW, WSL, etc.)
- Sin detección automática de compilador ni plataforma
- Escala mal: Makefiles grandes son difíciles de mantener
- Sin soporte nativo para builds fuera del árbol de fuentes
- Gestión de dependencias externas completamente manual

### ❌ CMake
- Curva de aprendizaje más pronunciada
- Requiere instalación adicional (no siempre disponible por defecto)
- Excesivo para proyectos pequeños o ejercicios académicos
- Mensajes de error a veces poco claros o difíciles de depurar
- Agrega una capa de abstracción que puede complicar la depuración del proceso de build

---

## ¿Cuándo usar cada uno?

| Situación | Recomendación |
|---|---|
| Proyecto pequeño (1–10 archivos) | **Make** |
| Solo necesitas compilar en Linux/macOS | **Make** |
| Ejercicio académico o tarea de clase | **Make** |
| Automatizar tareas simples (build, run, clean) | **Make** |
| Proyecto multiplataforma (Linux + Windows + macOS) | **CMake** |
| Dependencias externas que localizar automáticamente | **CMake** |
| Equipo con IDEs distintos (CLion, VS Code, Xcode) | **CMake** |
| Proyecto grande con múltiples módulos y subdirectorios | **CMake** |
| Necesitas testing y empaquetado integrados | **CMake** |
| Proyecto profesional o de código abierto | **CMake** |

---

## Conclusión

> **Make** es la elección correcta para proyectos simples, entornos Unix y cuando se necesita control total sin abstracciones — ideal para cursos y laboratorios.
>
> **CMake** es la elección correcta cuando el proyecto debe ser portable, escalar en tamaño o integrarse con IDEs y herramientas modernas.
>
> No son excluyentes: **CMake puede generar Makefiles internamente**, combinando lo mejor de ambos mundos.
