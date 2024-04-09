# TP1

## Punto 2 🚀

¿Por qué es conveniente incluirlo?

Evita archivos no deseados en el repositorio: Git rastrea todos los archivos en un directorio, lo que significa que incluso los archivos generados automáticamente o temporales pueden ser incluidos accidentalmente. El archivo .gitignore permite especificar archivos que Git debe ignorar, evitando que estos archivos se añadan al repositorio.

Mantiene limpio el historial de cambios: Al ignorar archivos irrelevantes, se evita que llenen el historial de cambios del repositorio con modificaciones sin importancia, lo que facilita la revisión de cambios significativos.

Facilita el trabajo colaborativo: Al definir qué archivos ignorar, se asegura que todos los colaboradores del proyecto tengan un entorno de trabajo consistente y libre de archivos no deseados.

¿Cuándo se debe hacer?
Se debe configurar el archivo .gitignore tan pronto como se inicia un proyecto Git. Es especialmente útil hacerlo antes de realizar el primer commit, para evitar agregar accidentalmente archivos no deseados al repositorio desde el principio.

También es importante revisar y actualizar regularmente el archivo .gitignore a medida que el proyecto evoluciona y se agregan nuevos archivos o directorios que deben ser ignorados.

¿Cómo configuraría el archivo .gitignore?
Para configurar el archivo .gitignore, sigue estos pasos:

Identifica los archivos y/o directorios que deseas ignorar en tu repositorio.

Crea un archivo llamado .gitignore en el directorio raíz de tu repositorio si aún no existe.

Abre el archivo .gitignore en un editor de texto.

Agrega los patrones de archivos o directorios que deseas ignorar en líneas separadas. Puedes utilizar comodines (*) para especificar patrones de nombres de archivo.