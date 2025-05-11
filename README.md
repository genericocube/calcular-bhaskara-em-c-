# calcular-bhaskara-em-c-
um projeto simples pra conseguir calcular delta, x1 e x2 

Para execultar o codigo você precisa ter o mingw instalado no seu pc. caso não tenha aqui esta o link: https://sourceforge.net/projects/mingw/ apos isso instale o minGW onde quiser (mas recomendo que seja na pasta C:).

Veja se as variaveis de ambiente do mingw ta configurada: para isso abra o cmd e digite: "g++ --version" (sem aspas). se tudo estiver certinho vai aparecer algo mais ou menos assim:

* g++ (MinGW.org GCC-6.3.0-1) 6.3.0
* Copyright (C) 2016 Free Software Foundation, Inc.
* This is free software; see the source for copying conditions. There is NO
* warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

se deu alguem erro etc siga os seguintes passos: va na sua barra de pesquisar do ruindows(brincadeira) e digite "editar as variaveis de ambiente do sistema" depois va em avançado, e clique em variaveis de ambiente. agora va na parte "variaveis do sistema" e procure por PATH, apos clicar va no butão "novo" e coloque o local onde você instalou o mingw. (que no meu caso foi: "C:\MinGW\bin"). apos isso tudo renicie seu pc pra evitar dar merda (falo por experiencia).

Como rodar agora com tudo isso feito veja onde esta o main.cpp e abra uma janela powershell(ou cmd se preferir), (segure a tecla shift e clica com butão direito que ele vai mostrar "abrir janela powershell aqui"). e agora digite "g++ main.cpp -o nome_que_vc_quer" (sem as aspas). ai ele vai gerar o exe do progama pra vc testar.

peço desculpa por todos os erros de digitação.
