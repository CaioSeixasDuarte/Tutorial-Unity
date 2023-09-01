# Tutorial-Unity
O Unity é um framework para testes unitários de programas escritos em linguagem C. Para utilizá-lo, devem ser seguidos os seguintes passos:

1) Configuração: 
  - Devem ser salvos alguns arquivos do framework em uma pasta dentro do diretório do projeto a ser testado;
  - Deve ser instalado o compilador "GCC";

2) Codificação:
  - No arquivo C, devem ser incluídos o arquivo header do framework Unity e, caso seja necessário, o arquivo header com funções a serem comparadas nos testes;
  - Em seguida, devem ser inseridas funções padrão de configuração, caso sejam necessárias;
  - Depois, devem ser inseridas as funções de teste denominadas "Assert", que fazem comparações entre valores calculados e valores esperados. Tais funções podem ser de vários tipos, como:
          - Teste básicos de validade;
            - Ex: TEST_ASSERT_TRUE(condition).
          - Asserções numéricas com números;
            - Ex: TEST_ASSERT_EQUAL_INT(expected, actual).
          - Asserções de string;
            - Ex: TEST_ASSERT_EQUAL_STRING(expected, actual).

3) Compilação e execução:
  - Para compilar os testes, deve ser utilizado o compilador GCC.
    - Ex: gcc test_projfinal.c Unity/unity.c -o test_projfinal.x
  - Para executar o teste, deve ser utilizado o seguinte comando:
    - Ex: ./test_projfinal.x    
