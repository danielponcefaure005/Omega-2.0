%definicion de los predicados.
% ejercicio1.
invertir([], []).  
invertir([Cabeza|Cola], ListaInvertida) :-
    invertir(Cola, ColaInvertida),  
    append(ColaInvertida, [Cabeza], ListaInvertida). 
