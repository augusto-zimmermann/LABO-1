Restar millis ocupa muchos mas ciclos de reloj que sumar y comparar cuando llega al valor deseado. 

### En vez de 
```
long unsigned millisActules = millis();
tiempoDeseado - millisActules;
```
### Se hace 
```
int tiempoDeaseadoCalculado = 500
long unsigned millisActules = millis();
millisActuales >= tiempoDeaseadoCalculado;
if (millisActuales >= tiempoDeaseadoCalculado) {
      [acción];
    }
```

> [!NOTA]
> En este caso, tiempoDeaseadoCalculado se refiere al calculo de cuando llega al valor deseado, no simplemente el valor

## Ejemplos en código
`int tiempoDeaseadoCalculado = 500;`

    long unsigned millisActuales = millis();

    if (millisActuales >= tiempoDeaseadoCalculado) {

      luzVerde();

    }

// Checkeo si estan todos los cables a la izquierda

    while ((digitalRead(CABLE_0) || digitalRead(CABLE_1) || digitalRead(CABLE_2) || digitalRead(CABLE_3)) == LOW) {

      digitalLCD.print("no conectados");

    }


  tiempoInicioDelay = millis();

  esperandoDelay = true;

  

  // Cable correcto

  if (esperandoDelay) {

      if (millis() - tiempoInicioDelay >= duracionDelay) {

      esperandoDelay = false;

      luzAzul();

    }

    }


# 2
// Funciones

  void explotar(){

    digitalLCD.clear();

    digitalLCD.setCursor(0,0);

    digitalLCD.print("F"); // Mensaje cuando explota

    while (true) {luzRojaRespirando(); } // F en el chat

  }
  1