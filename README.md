# Criptografia
Solicitaram que você construísse um programa simples de criptografia. Esse programa deve possibilitar o envio
de mensagens codificadas. O processo é muito simples. São feitas três passadas em todo o texto, conforme segue:

Na primeira passada, somente caracteres que sejam letras minúsculas e maiúsculas devem ser deslocadas 3
posições para a direita, segundo a tabela ASCII: letra ’a’ deve virar letra ’d’, letra ’y’ deve virar caractere ’|’ e
assim sucessivamente. Na segunda passada, a linha deverá ser invertida. Na terceira e última passada, todo e
qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda
na tabela ASCII. Neste caso, ’b’ vira ’a’ e ’a’ vira ’‘’.

Por exemplo, se a entrada for “Texto #3”, o primeiro processamento sobre esta entrada deverá produzir “Whwr #3”.
O resultado do segundo processamento inverte os caracteres e produz “3# rw{hW”. Por último, com o deslocamento
dos caracteres da metade em diante, o resultado final deve ser “3# rvzgV”.

Importante: seu programa deve ser composto de funções recursivas para criptografar a mensagem. Para cada
função recursiva implementada, esquecifique sua equação de recorrência e estime sua complexidade utilizando
notação O para o pior caso

# Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤
1*104), indicando a quantidade de linhas que o problema deve tratar. As N linhas contém cada uma delas M (1 ≤ M
≤ 1*103) caracteres.

# Saída
Para cada entrada, deve-se apresentar a mensagem criptografada
