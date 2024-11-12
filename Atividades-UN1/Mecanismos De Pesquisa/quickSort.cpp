/*
Complexidade:

Melhor Caso e Caso Médio: 
𝑂(𝑛log(𝑛)) – ocorre quando o pivô divide o array em duas partes equilibradas.

Pior Caso: 
O(n^2) – ocorre quando o pivô é o maior ou menor elemento, criando divisões desbalanceadas (como em arrays já ordenados).

Estratégias para evitar o pior caso:
Pivô aleatório ou Mediana de Três (escolher o pivô como a mediana entre o primeiro, último e o elemento do meio) ajudam a manter divisões balanceadas e evitar o pior caso.*/