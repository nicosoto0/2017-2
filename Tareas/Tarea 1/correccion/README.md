# Corrección Tarea 1

### Explicación errores:
* **TIMEOUT**  
Su programa se demoró más de 10 segundos en el test. Verifiquen que no hayan sleeps ni `printf`

* **RUNTIME ERROR**  
Su programa se cayó por una razón desconocida. Debuggeen con valgrind.

* **INCORRECT: No se encuentra el archivo con la solución `./result.txt`**  
Verifiquen que llaman a la función `watcher_close()` al final de su programa

* **INCORRECT: No se puede poner el cable (no se cumplen condiciones): _row_ _col_ - _row2_ _col2_ (color _c_)**  
No se puede poner un cable de color _c_ entre los componentes (_row_, _col_) y (_row2_,_col2_) por alguna de las siguientes razones:  
  - Al momento de poner ese cable, alguno de los componentes ya tiene los cables que necesita conectados (está "lleno")
  - Los componentes que se tratan de conectar son de distinto color y no son hubs
  - Al conectar ese cable quedaría cruzado con otro

* **INCORRECT: Nodo _row_ _col_ no quedó lleno**  
Después de conectar todos los cables de la solución entregada, el componente de la posición (_row_, _col_) no quedó con todos los cables que debería tener para resolver el problema

* **INCORRECT: Hay _n_ cables que no estan conectados a un nodo final**  
Después de conectar todos los cables de la solución entregada, hay cables que no quedaron conectados a un camino que lleve a un componente terminal

* **INCORRECT: Primer/Segundo nodo de un cable fuera del tablero: _row_ _col_ - _row2_ _col2_**  
Alguno de los componentes del cable: (_row_, _col_), (_row2_,_col2_) está fuera del tablero

* **INCORRECT: Cable inválido _row_ _col_ - _row2_ _col2_**  
Su solución puso un cable en que (_row_,_col_) no es vecino de (_row2_,_col2_) y por tanto el cable es inválido
