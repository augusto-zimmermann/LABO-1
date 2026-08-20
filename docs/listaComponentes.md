Y SI TUVIERA UN GIROSCOPIO QUE ACTIVA LA BOMBA CUANDO LEVANTAS LA CAJA
NONONO AMIGO LA DESCOCI

Necesito que el código verifique cuando:
- [x] La bomba esta armada (ni bien comienza) y lo muestre
- [ ] Checkee cuando un switch cambia de estado, lo que significaría que se "removió un cable" (sujeto a revisión)
- [ ] Checkee cuando un switch (cualquiera) cambia de estado más de una vez (contador) y darlo como intento fallido
- [ ] Y, obviamente, checkee y notifique cuando están en el orden correcto (se necesitan cortar los cables en orden, o, alternativamente, se podría hacer que solo 2 cables se necesiten cortar)

Bueno, en la lista de componentes hay:
- 1 x módulo interruptor de inclinación KY-020
	- El módulo Ky-020 está diseñado para detectar inclinaciones de cualquier objeto unido al módulo ya que el KY-020 envía un pulso al detectar una inclinación.
	- Entrega una salida digital (un 1 al detectar una inclinación) y (un 0 en estado de reposo).
- 1 x módulo taza mágica de luz KY-027
	- Detecta vibraciones o inclinaciones en una superficie por medio de un interruptor de mercurio, entregando una salida digital que activa el regulador PWM y posee un LED que enciende cuando detecta dicha inclinación.
	- El Modulo KY-027 Sensor Magic Cup Light son fáciles de desarrollar, los ejemplos mas destacados es para proyectos de nivelación o control de estabilidad; como robot, carros, drones, etc.
- 1 x módulo sensor de golpe KY-031[^1]
	- Este módulo es un sensor de impacto que tiene la capacidad de percibir los impactos que este o que una superficie sujeta a este pueda recibir, la información de impacto es transformada por el sensor y enviada a la placa.

[^1]: Seria bastante chistoso implementarlo
