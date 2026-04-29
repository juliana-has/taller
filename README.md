#Como compilarlo
Mi querido claude me explico como se compila todo esto y literalmente funciona normal y cada cosa llama a otra

El flujo completo es:

make run llama a make build
make build le ordena a g++ compilar cada .cpp por separado con el flag -c (sin enlazar todavía)
Cada .cpp produce su propio archivo objeto .o (código máquina sin terminar)
El matecas.h es incluido por ambos .cpp durante la compilación — le dice a cada uno qué funciones existen
El enlazador junta los dos .o en un solo ejecutable ./matecas
make run lo ejecuta, y main() es el punto de entrada automático que llama a las demás funciones

thanks
