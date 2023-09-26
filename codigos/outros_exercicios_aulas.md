# Outros exercícios passados em aulas

1. **Atividade de Avaliação Contínua 4 - Questão 1**  
Elabore um algoritmo que diga, segundo as regras abaixo, quais encaminhamentos um paciente terá ao chegar no pronto-socorro.

   - Se o paciente está com temperatura superior a 37,5C, deve ser encaminhado ao exame de sangue e urina. Se estiver com falta de ar, deve ser encaminhado para tomografia do pulmão. Se estiver com temperatura normal ou febre baixa (entre 35C a 37,5C), será encaminhado a consulta com clínico geral. Se o paciente estiver com temperatura inferior a 35C ou estiver desacordado, deve ser encaminhado à emergência. (Observe que um paciente pode ter mais de um encaminhamento por triagem. Não esqueça de avaliar o que é dependente e o que é independente).


2. **Atividade de Avaliação Contínua 4 - Questão 2**  
   - Faça um algoritmo em portugol ou linguagem C para o seguinte problema:
     - Um grupo de alunos coletou informações climáticas de uma determinada cidade. Foram realizadas várias medições de temperatura durante o ano e medições mensais do índice pluviométrico. Elabore um algoritmo que, dadas estas informações, mostre a média anual de temperatura e a média anual de índice pluviométrico.

   - Mostre o valor de uma compra e o número de itens comprados, dado preço de cada produto (preço igual a -1 encerra a compra). Após, reinicie a execução para uma nova compra. No final do expediente, mostre o total recebido por este caixa.


3. **Atividade de Avaliação Contínua 5**  
Ler a idade de 50 pessoas, mostrar a média das idades, o número de pessoas com idade abaixo da média, porcentagem de menores de idade e a idade do mais velho.


4. **Atividade Avaliativa para N1**  
Na fabricação de um determinado produto químico, existe a necessidade de auditorias periódicas para análise de risco. Durante uma auditoria, o auditor faz medidas de temperatura e de PH do produto durante sua fabricação por um número indeterminado de dias. A cada dia afere-se o PH um vez e afere-se a temperatura a cada hora. O PH desejável é de 6,0 a 8,0 e a temperatura normal é no máximo 90°C.

   - Escreva um algoritmo que, para cada dia de auditoria, receba como entrada o PH e as medidas de temperaturas. Caso o PH esteja fora do desejável, deve-se emitir um sinal de alerta. Caso a temperatura esteja acima do normal e até 110°C, emita uma solicitação de resfriamento. Caso a temperatura ultrapasse 110°C, emita um sinal de alerta.

   - No final de um dia de auditoria, mostre a temperatura média deste dia e pergunte ao auditor se quer continuar a auditoria por mais um dia.

   - Ao final do período de auditoria, mostre o seguinte relatório:
     - Número de dias do período;
     - Quantas vezes um sinal de aleta foi emitido por causa do PH acima de 8,0;
     - Quantas vezes um sinal de aleta foi emitido por causa da temperatura acima de 110°C;
     - Quantos dias tiveram temperatura média acima de 95°C;
     - Emitir a mensagem “Aprovado” caso não tenha ocorrido nenhum sinal de alerta.

5. **Encomenda de Uniformes**  
Uma empresa fará encomenda de uniformes para seus funcionários em suas 2 unidades. Cada funcionário receberá 2 calças e 2 blusas de uniforme. A unidade 1 possui 2 setores e a unidade 2 possui 5 setores. Cada setor escolhe a cor da camiseta (branca, preta ou azul) e o tecido da calça (tactel ou moletom).

   - Escreva um algoritmo que receba como entrada o número de funcionários de cada setor e as características do seu uniforme (cor da camiseta e tecido da calça).

   - Após as leituras, o algoritmo deve emitir um destes relatórios, de acordo com a escolha do usuário:  
      1 - Total de funcionários da unidade (dado o número da unidade, 1 ou 2, mostre o total de funcionários da unidade)  
      2 - Total de funcionários do setor (dado o número da unidade e do setor, mostre o total de funcionários deste setor)  
      3 - Uniforme do setor (dado o número da unidade e do setor, mostre as características do uniforme deste setor)  
      4 - Maior unidade (mostra a unidade que tem mais funcionários)  
      5 - Total de encomendas (mostre as quantidades de peças que serão encomendadas: quantidade de camisetas brancas, de camisetas pretas, de camisetas azuis, de calças de tactel e de calças de moletom).  
      Após a emissão de cada relatório, o programa deve perguntar se o usuário deseja emitir outro relatório ou se deseja finalizar o programa.

6. Faça um programa em linguagem C que preencha uma matriz 3x2 com valores inteiros. Então imprima os valores das duas colunas, depois imprima os valores das três linhas.


7. **Encomenda de Uniformes (com matrizes)**  

   - Refaça o exercício **Encomenda de Uniformes** , mas agora considere que a empresa tem 3 unidades e cada unidade tem um número indeterminado de setores (no máximo 10 setores). Não pergunte quantos setores cada unidade tem, estes valores devem ser contados.

   - Antes de iniciar, identifique quais dados devem ser armazenados na memória e quantos vetores, matrizes e variáveis simples precisaremos para isso.


8. **Atividade Avaliativa para N1 (com modificações)**  

   - Altere a **Atividade Avaliativa para N1**, mas, após a leitura dos dados, acrescente o seguinte relatório:

   - Dado o dia da auditoria, mostre o PH e as medidas de temperaturas aferidas neste dia. Após, forneça ao usuário a opção de consultar um outro dia, se ele desejar.