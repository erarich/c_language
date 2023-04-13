# Monitoria - Disciplina de Lógica de Programação


### Tabela de Conteúdos
* [Disciplina de Lógica de Programação (Ementa)](https://github.com/erarich/c_language#disciplina-de-l%C3%B3gica-de-programa%C3%A7%C3%A3o-ementa)
* [Bibliografia](https://github.com/erarich/c_language#bibliografia)
* [Instalação do compilador de C - MinGW (para Windows)](https://github.com/erarich/c_language#instala%C3%A7%C3%A3o-do-compilador-de-c---mingw-para-windows)
* [Utilização básica do GCC](https://github.com/erarich/c_language#utiliza%C3%A7%C3%A3o-b%C3%A1sica-do-gcc)
* [Recomendações de conteúdo sobre linguagem C](https://github.com/erarich/c_language#recomenda%C3%A7%C3%B5es-de-conte%C3%BAdo-sobre-linguagem-c)
* [Exercícios linguagem C](https://github.com/erarich/c_language#exerc%C3%ADcios-linguagem-c)


### Disciplina de Lógica de Programação (Ementa)

![ementa](/ementa.png)

### Bibliografia

* [Algoritmos e Estrutura de Dados](./bibliografia/Algoritmos%20e%20Estrutura%20de%20Dados.pdf)
* [Algoritmos e Lógica de Programação](./bibliografia/Algoritmos%20e%20L%C3%B3gica%20de%20Programa%C3%A7%C3%A3o.pdf)
* [C Completo e Total](./bibliografia/C%20Completo%20e%20Total.pdf)
* [Como programar em C, Deitel](./bibliografia/Como%20programar%20em%20C%2C%20Deitel.pdf)
* [Conceitos de Linguagens de Programação](./bibliografia/Conceitos%20de%20Linguagens%20de%20Programa%C3%A7%C3%A3o.pdf)
* [Linguagem C - Roteiro de Experimentos para Aulas Práticas](./bibliografia/Linguagem%20C%20-%20Roteiro%20de%20Experimentos%20para%20Aulas%20Pr%C3%A1ticas.pdf)
* [Lógica de Programação, Forbellone](./bibliografia/L%C3%B3gica%20de%20Programa%C3%A7%C3%A3o%2C%20Forbellone.pdf)

### Instalação do compilador de C - MinGW (para Windows)

O MinGW é um ambiente de desenvolvimento para Windows que fornece um conjunto de ferramentas GNU, incluindo um compilador C/C++ e outras utilidades, permitindo compilar e executar programas C/C++ no Windows. Seguem abaixo as instruções para instalar o MinGW no Windows:

1. Acesse o site do MinGW em https://sourceforge.net/projects/mingw/ e clique no botão "Download" para baixar o instalador.

2. Abra o arquivo de instalação baixado e siga as instruções do assistente de instalação. Na tela "Choose Components", selecione os componentes que deseja instalar. Para a maioria dos casos, é recomendável selecionar todos os pacotes básicos, como "mingw32-base", "mingw32-gcc-g++", "msys-base" e "mingw32-make".

3. Na tela "Choose Installation Directory", escolha o diretório onde deseja instalar o MinGW. O diretório padrão é "C:\MinGW", mas você pode escolher qualquer diretório que desejar.

4. Na tela "Select Additional Tasks", selecione as opções adicionais que desejar e clique em "Next" para prosseguir com a instalação.

5. Na tela "Ready to Install", revise as configurações e clique em "Install" para iniciar a instalação.

6. Aguarde até que a instalação seja concluída. Dependendo da velocidade do seu computador e da seleção dos pacotes, a instalação pode levar alguns minutos.

7. Depois que a instalação for concluída, adicione o diretório "bin" do MinGW ao caminho do sistema. Para fazer isso, abra o Painel de Controle, clique em "Sistema e Segurança" e selecione "Sistema". Clique em "Configurações avançadas do sistema" e, na guia "Avançado", clique em "Variáveis de ambiente". Na seção "Variáveis do sistema", encontre a variável "Path" e clique em "Editar". Adicione o diretório "C:\MinGW\bin" (ou o diretório que você escolheu) ao final da lista separada por ponto e vírgula. Clique em "OK" para salvar as alterações.

8. Agora, o MinGW está instalado e configurado corretamente. Para testar a instalação, abra um prompt de comando e digite "gcc -v" para verificar se o compilador C está instalado corretamente.

### Recomendações de conteúdo sobre linguagem C

* Inglês - [C Porgramming Language CheatSheet](https://developerinsider.co/c-programming-language-cheat-sheet/)
* Inglês - [C CheatSheet](https://www.codewithharry.com/blogpost/c-cheatsheet/)
* Inglês - [C Docs](https://devdocs.io/c/)
* Português - [Documentação do C](https://learn.microsoft.com/pt-br/cpp/c-language/?view=msvc-170)
* Português - [Linguagem C](http://linguagemc.com.br/)

### Utilização básica do GCC

Para compilar um arquivo em C/C++ usando o GCC, você pode usar o comando "gcc" seguido do nome do arquivo de origem (o arquivo com o código fonte) e do nome do arquivo de saída (o arquivo executável que será gerado). O formato geral do comando é:

    gcc arquivo_de_origem -o nome_do_arquivo_executavel

Por exemplo, se você tem um arquivo chamado "meu_programa.c" e deseja gerar um arquivo executável chamado "meu_programa", você pode usar o seguinte comando:

    gcc meu_programa.c -o meu_programa

O GCC tentará compilar o código em "meu_programa.c" e gerar um arquivo executável chamado "meu_programa". Se a compilação for bem sucedida, você pode executar o programa com o comando:


    ./meu_programa

Caso você não especifique o nome do arquivo de saída usando a opção "-o", o GCC usará o nome padrão "a.out" para o arquivo executável.

Você também pode compilar vários arquivos ao mesmo tempo, usando a mesma sintaxe e especificando os nomes de todos os arquivos de origem. Por exemplo, se você tem dois arquivos "meu_programa.c" e "funcoes.c", e deseja gerar um arquivo executável chamado "meu_programa", você pode usar o seguinte comando:

    gcc meu_programa.c funcoes.c -o meu_programa

O GCC tentará compilar os arquivos "meu_programa.c" e "funcoes.c" e gerar um arquivo executável chamado "meu_programa".

Lembre-se de que, ao compilar arquivos que incluem bibliotecas externas, você precisará vincular a biblioteca ao arquivo executável usando a opção "-l". Por exemplo, se você tem um arquivo "meu_programa.c" que usa a biblioteca "math", você pode usar o seguinte comando para compilar o arquivo e vincular a biblioteca:

    gcc meu_programa.c -o meu_programa -lm

Observe que a opção "-lm" especifica que a biblioteca "math" deve ser vinculada ao arquivo executável.

Essas são algumas maneiras de usar o GCC para compilar códigos em C/C++ e nomear os arquivos executáveis gerados. Com essas técnicas, você poderá compilar seus programas com sucesso e nomear os arquivos executáveis conforme suas necessidades.


### Exercícios linguagem C

* Sites com desafios/exercícios
    * [Exercism](https://exercism.org/tracks/c)
    * [CodeWars](https://www.codewars.com/kata/c)




