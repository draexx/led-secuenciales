# Arduino LED Secuencia Project

## Descripción del Proyecto
Código de Arduino que controla una secuencia de luces LED en 8 pines digitales.

## Simulación
[Ver proyecto en Tinkercad](https://www.tinkercad.com/things/6bNqAiK7PcM-luces-secuenciales)

## Componentes
- Placa Arduino
- 8 LEDs
- Resistencias limitadoras (220-330 ohmios)
- Cables de conexión

## Código Explicado

### Variables
```cpp
const int bit = 8;  // Número de LEDs
int salida[bit] = {2, 3, 4, 5, 6, 7, 8, 9};  // Pines digitales
int timeDelay = 1000;  // Retardo de 1 segundo
```

### Función `setup()`
Configura los pines de LEDs como salidas.

### Función `loop()`
- Secuencia 1: Enciende LEDs de izquierda a derecha
- Secuencia 2: Enciende LEDs de derecha a izquierda

## Personalización
- Modificar `timeDelay` para cambiar la velocidad
- Ajustar pines en `salida[]`

## Licencia
Este proyecto está bajo la Licencia MIT - ver el archivo [LICENSE](LICENSE) para más detalles.

## Autor
[Pedro Carranza](https://github.com/draexx)
