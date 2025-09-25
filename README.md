<img src="https://github.com/user-attachments/assets/e8a0cf5d-ec34-44fb-a6b8-587c12e34f03" alt="Imagen header" style="width: 100%;" />

# Lib42 – Librería de Utilidades en C

Una pequeña librería de utilidades en C creada durante mi etapa en [42 Barcelona](https://www.42barcelona.com).  
Proporciona funciones comunes para manejo de cadenas, memoria y operaciones básicas, empaquetadas en una librería estática (`libft.a`).

#### Contenido del Repositorio

Este repositorio incluye todo lo necesario para usar y probar la librería:

- Archivos fuente `.c` y objetos `.o` que contienen las funciones implementadas.  
- `libft.h` – Cabecera principal con las declaraciones de las funciones.  
- `Makefile` – Permite compilar la librería estática `libft.a` desde los archivos fuente.  
- `libft.a` – Librería compilada (puede regenerarse ejecutando `make`).  
- Carpeta `tests/` – Contiene scripts y ejemplos para probar la robustez de las funciones.

## 📦 Cómo usar

Sigue estos pasos para utilizar la librería en tu proyecto en C.

---

### 1️⃣ Clonar el repositorio

```bash
git clone https://github.com/MSG-DEVELOPER/tu-repo.git
cd tu-repo
```

### 2️⃣ Preparar la librería
Si solo tienes los archivos `.c`, `.o` y el `Makefile`, compila la librería estática con:

```bash
make

```
Esto generará el archivo libft.a a partir de los objetos .o.

### 3️⃣ Incluir la cabecera

En tu código C donde quieras usar las funciones:
```bash
#include "libft.h"
```


> ⚠️ Asegúrate de que libft.h esté en la misma carpeta que tu archivo .c o en una ruta accesible para el compilador.


### 4️⃣ Compilar tu programa usando la librería

Supongamos que tu programa se llama main.c y la librería está en la misma carpeta:

```bash
gcc -o mi_programa main.c -L. -lft
```

* -L. → indica al compilador que busque librerías en el directorio actual (.). 

* -lft → enlaza con libft.a (el prefijo lib se omite, .a también).

* Si libft.h está en otra carpeta, añade la opción -I:

```bash

gcc -o mi_programa main.c -I./include -L. -lft

```

### 5️⃣ Ejecutar el programa

```bash
./mi_programa
```

✅ ¡Y listo! Ahora puedes usar todas las funciones de la librería Lib42 en tus proyectos en C.

---
## ℹ️ Sobre 42 Barcelona

42 Barcelona forma parte de la **red global 42**, una escuela de programación revolucionaria sin profesores tradicionales, clases ni matrículas.  
El aprendizaje se basa en la **colaboración entre pares**, proyectos desafiantes y la pasión por el **aprendizaje continuo**.  

El plan de estudios nos impulsa a **pensar de manera crítica**, **innovar** y convertirnos en **programadores autosuficientes**.



#### 🛠️ Tecnologías utilizadas en el Core Curriculum
<p align="left">
  <img src="https://skillicons.dev/icons?i=c" alt="C" />
  <img src="https://skillicons.dev/icons?i=bash" alt="Bash" />
  <img src="https://skillicons.dev/icons?i=linux" alt="Linux" />
  <img src="https://skillicons.dev/icons?i=git" alt="Git" />
</p>


