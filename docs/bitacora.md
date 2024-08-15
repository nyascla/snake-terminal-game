# notas y reflexiones del desarrollo

## ¿Qué es un Servidor HTTP?
Un servidor HTTP es un programa que implementa el protocolo HTTP, que es el protocolo de comunicación principal para la web. Sus funciones principales son:

1. Escuchar Solicitudes: Espera y escucha en un puerto específico (por defecto el puerto 80 para HTTP y el puerto 443 para HTTPS) por solicitudes de clientes (como navegadores web).
1. Procesar Solicitudes: Analiza las solicitudes HTTP recibidas, que pueden incluir peticiones de recursos (como HTML, CSS, imágenes), datos de formularios, y más.
1. Generar Respuestas: En función de la solicitud, genera una respuesta HTTP que incluye un código de estado (como 200 OK, 404 Not Found) y, opcionalmente, el contenido solicitado (como una página web o un archivo).
1. Enviar Respuestas: Envía la respuesta de vuelta al cliente que hizo la solicitud.

## Ejemplo Básico de un Servidor HTTP:
forma más simple implementado en C utilizando sockets.

1. Crear un Socket: Utiliza la API de sockets para crear un socket que escuche en un puerto específico.
1. Aceptar Conexiones: Acepta conexiones entrantes de clientes.
1. Leer Solicitudes: Lee la solicitud HTTP del cliente.
1. Generar Respuesta: Prepara una respuesta HTTP.
1. Enviar Respuesta: Envía la respuesta al cliente.
1. Cerrar la Conexión: Cierra la conexión o mantiene abierta según la solicitud HTTP.

## Apache HTTP Server
Apache HTTP Server es un servidor web robusto y versátil que proporciona una plataforma confiable para el alojamiento de sitios web. Desarrollado y mantenido por la Apache Software Foundation, Apache ha sido el servidor web más popular durante muchos años debido a su flexibilidad, extensibilidad y soporte comunitario.