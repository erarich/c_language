# Provas antigas

Correções de algumas provas: [correões_provas_antigas]()

### Vetores
#### **Atividade Avaliativa 1 – 2020/1 A**  
10 atletas foram monitorados por 8 semanas. Para cada atleta foram registrados sua idade, várias medições do nível de oxigênio no sangue e medições semanais de frequência cardíaca. Elabore um algoritmo que, para cada atleta, mostre seu nível médio de oxigênio no sangue e a maior frequência cardíaca registrada durante o período de monitoramento. No final mostre ainda quantos tiveram a média de oxigênio no sangue abaixo de 96 e a percentagem de atletas com mais de 25 anos e a percentagem com menos de 16 anos.


obs.: Na leitura das medições de nível de oxigênio no sangue, utilize o valor -1 para indicar que a sequência de medições finalizou (o valor -1 na entrada é o código para a parada da estrutura de repetição e não deve ser processado). Considere que os valores de nível de oxigênio e frequência cardíaca são valores reais.

#### **Atividade Avaliativa 1 – 2020/1 B**  
Durante 6 meses, 30 funcionários de um shopping participaram de um programa de exercícios ocupacionais. Durante o programa foram registrados, para cada funcionário, sua idade, medições mensais de frequência cardíaca e várias medições do peso corporal. Elabore um algoritmo que, para cada funcionário, mostre seu peso médio e a maior frequência cardíaca registrada durante o programa. No final mostre ainda a percentagem de funcionários que tiveram sua maior frequência cardíaca ultrapassando 105 bpm e quantos tiveram o peso médio maior que seu peso final, quantos tiveram o peso médio menor que seu peso final e quantos forram iguais.  


obs.: Na leitura das medições do peso, utilize o valor -1 para indicar que a sequência de medições
finalizou (o valor -1 na entrada é o código para a parada da estrutura de repetição e não deve ser
processado). Considere que os valores de peso e frequência cardíaca são valores reais.

#### **Atividade Avaliativa 1 – 2020/2 A**  
Uma cooperativa de produtores rurais possui um armazém para armazenagem de arroz, feijão e milho. Cada produtor chega com o seu carregamento e este é contabilizado e armazenado. As sacas que contém produto orgânico, recebem um selo.


Faça um algoritmo que receba como entrada, para cada produtor, o número de sacas entregues e, para cada saca, seu conteúdo (arroz, feijão ou milho) e se é orgânico ou não. Para encerrar as atividades do dia, será digitado o código -1 na variável de entrada referente ao número de sacas.


Após o encerramento das atividades, o algoritmo deve imprimir o seguinte relatório:
- Porcentagem de sacas que receberam o selo orgânico,
- Quantidades de sacas recebidas de cada grão,
- Quantidade de sacas da maior entrega do dia,
- Quantos produtores entregaram mais de 15 sacas de arroz,
- Média de sacas entregue por produtor.


#### **Atividade Avaliativa 1 – 2020/2 B**  
Uma editora pretende fazer uma análise estatística sobre os dados de seus pedidos nos últimos anos. Faça um algoritmo que receba como entrada, para cada pedido realizado no período, o número de livros encomendados e, para cada livro, receba o seguimento do livro (Fundamental, Médio ou Superior) e se o livro teve incentivo fiscal ou não. Para encerrar a coleta dos dados, será digitado o código -1 na variável de entrada referente ao número de livros do pedido.


Após o encerramento das leituras, o algoritmo deve imprimir o seguinte relatório:
- Porcentagem de livros de cada seguimento,
- Número total de livros que não receberam incentivo fiscal,
- Média de livros por pedido no período.
- Quantos pedidos tiveram mais de 20 livros com incentivo fiscal,
- Quantos livros tinha o maior pedido.


#### **Atividade Avaliativa 1 – 2022/2 B**  
Faça um algoritmo que receba o preço, o nome, a quantidade em estoque e o tipo (mercearia, limpeza e perecíveis) de produtos em 34 filiais de uma rede de lojas. Para encerrar a lista de produtos de uma filial, será inserido o valor -1 na variável de entrada referente ao preço.


Mostre, para cada filial, o valor total (em R$ ) em estoque. Mostre também a percentagem de produtos de mercearia, de limpeza e de perecíveis, contando toda as filiais. Por último mostre o preço do produto mais caro entre todos os produtos lidos e quantas filiais têm menos que R$ 60.000,00 em estoque.

### Matrizes

#### **Atividade Avaliativa para N2 - 2023/1 22/06/2023**
Uma loja fará uma consulta de opinião com seus clientes por 5 dias. A cada dia no máximo 20 clientes serão questionados (não receber o número de clientes como entrada):
1. Encontrou o que procurava?
2. Ficou satisfeito?


Faça um programa em linguagem C que leia as respostas dos clientes e, após as leituras, mostre 1
destes relatórios:
- Relatório por dia: dado o dia, mostrar todas as respostas deste dia.
- Relatório por pergunta: dada a pergunta, mostre a percentagem de respostas “sim” e a
percentagem de respostas “não”.
- Relatório por cliente: dados o número do cliente e o dia, mostre as respostas;
- Relatório geral: mostre quantos clientes foram consultados, quantos responderam “não” para a
duas questões, quantos estão satisfeitos, a percentagem de clientes que encontraram o que
procuravam no 5° dia de pesquisa.


Após imprimir um relatório, oferecer a opção para o usurário imprimir outro relatório se desejar.

#### **Atividade Avaliativa de Programação N2 – 2021/1**
Uma escola de idiomas mantém 3 turmas de no máximo 10 alunos em cada. Os alunos recebem 3 notas ao longo do ano, a média aritmética destas notas consiste na média final do aluno e a média para aprovação é no mínimo 7,0 pontos. O aluno deve ter também no máximo 10 faltas, caso contrário será reprovado por falta. Se o aluno tiver média final abaixo de 5,0 também será reprovado. O aluno que não foi aprovado, nem reprovado, terá a chance de fazer uma prova substitutiva. Elabore um programa em linguagem C que leia para cada aluno, seu nome, suas 3 notas, sua frequência e mostre os seguintes relatórios:

- Consulta por aluno:


Dado o número do aluno e de sua turma, mostre seu nome, suas notas, sua média final, sua
frequência e uma das mensagens: “Reprovado por falta”, “Reprovado por nota”, “Aprovado” ou
“Fará substitutiva”.


- Consulta por turma:


Dado o número da turma, mostre quantos alunos tem a turma, quantos tiveram média final acima de
8, quantos alunos tiveram algum zero em suas notas, quantos farão prova substitutiva e qual é a
média de notas geral da turma.


Após imprimir um relatório, deve ser possível ao usuário imprimir outro caso queira.

#### **Atividade Avaliativa de Programação N2 – 2022/2**
Uma fábrica de argamassas vende 3 produtos: argamassa AC3 20kg, argamassa AC2 20kg e rejunte 5kg. Suas entregas são feitas em Palmas ou Porto Nacional. Durante o último ano, esta fábrica manteve registros de pedidos de 2 grandes clientes. Cada cliente fez um número indeterminado de pedidos (no máximo 10), sendo que cada pedido tem o tipo do produto, a quantidade de pacotes e a localidade da entrega.


Faça um programa em Linguagem C que leia os dados dos pedidos de cada cliente e imprima um
dos seguintes relatórios:
- Relatório por pedido: dado o número do cliente e do pedido, mostre o tipo e a quantidade do produto, a localidade e o valor do frete.


- Relatório por cliente: dado o número do cliente mostre a média de peso dos seus pedidos e o número de pedidos feitos no período.

- Relatório geral: mostre quantos kg de material foram vendidos no período e quais pedidos tem menos de 1000kg.


Após imprimir um relatório, deve ser possível ao usuário imprimir outro caso queira.


Obs.:


Cálculo do frete: Se o pedido tem menos que 1000kg, o frete é grátis. Se tem de 1001kg a 2000kg, o
frete é R$ 100,00 para Palmas e 200,00 para Porto Nacional. Se tiver mais que 2000kg, o valor do
frete será 2 reais por pacote.
