Temos as nossas coordenadas iniciais (1 , 1), e o nosso maximo, que e indicado pelas variaveis inseridas quando chamam a funcao rush(int X, int Y) (X, Y).

No nosso main, antes de chamar a funcao que imprime as coisas corretas, vamos obter as coordenadas onde nos encontramos atravez de dois loops.

Como vamos imprimir de linha a linha, de cima para baixo, fazemos loop do X dentro do loop de Y.

Depois de ter as coordenadas atuais (Curr_x, Curr_y) ja podemos enviar para a nossa funcao que vai printar tudo como deve ser. (print_coords())

O print_coords, a unica coisa que faz, e verificar algumas regras simples para saber se nos encontramos ou:

-Num canto

-Numa aresta

-No meio do retangulo

Dependendo de onde nos encontramos, vamos printar coisas diferentes.

Isto varia de rush para rush, pois temos alguns onde tem que tar coisas diferentes imprimidas em cantos opostos, e outros onde temos que imprimir a mesma coisas.

Tivemos que modificar as regras ligeiramente, mas o que imprimimos baseia-se sempre nas coordenadas atuais VS as coordenadas maximas.

E temos uma regra para verificar simplesmente se ambos os inputs de coordenadas maximas sao positivas  ((   if (max_x > 0 && max_y > 0)    ))

            Minimum X                           Maximum X 
             x   y       x   y       x   y       x   y
/ * * \     (1 , 1)     (2 , 1)     (3 , 1)     (4 , 1)     -Minimum Y
*     *     (1 , 2)     (2 , 2)     (3 , 2)     (4 , 2)
\ * * /     (1 , 3)     (2 , 3)     (3 , 3)     (4 , 3)     -Maximum Y
