# Simple HTTP Server in C

Este proyecto implementa un servidor HTTP simple en C. El objetivo es proporcionar una base para entender cómo funcionan los servidores HTTP a nivel bajo, sin usar bibliotecas de alto nivel.

## Descripción

Este servidor HTTP básico está diseñado para escuchar en un puerto especificado y responder a solicitudes HTTP con un mensaje simple. Es útil como ejemplo educativo para aprender sobre el manejo de solicitudes y respuestas HTTP en un entorno de bajo nivel.

## Compilación

Para compilar el servidor, asegúrate de tener [gcc](https://gcc.gnu.org/) instalado en tu sistema. Luego, en la terminal, navega al directorio del proyecto y ejecuta:

```bash
make
```

Una vez compilado, puedes ejecutar el servidor con:
```bash
./bin/http_server_c
```