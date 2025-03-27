// Arquivo com implementações básicas:

class Exemplos{

  // 1 - Lendo valores em um loop e verificando valores negativos:
  int valores[10], iteracao;
  int tamanho =  sizeof(valores) / sizeof(valores[0]) ;

  // Lendo valores:
  for(iteracao = 0; iteracao < tamanho; iteracao++){
    cout << "Insira um valor -> ";
    cin >> valores[iteracao];
  }

  // Impimindo inverso:
  for(iteracao = tamanho -1; iteracao >= 0; iteracao--){
      cout << valores[iteracao] << "\n";
      if(valores[iteracao] < 0){
        cout << "ERRO -> VALOR NEGATIVO!";
        break;
      }
  }


  // 2 - Dados de alunos verificados em 3 vetores:
  int status_curso[10], frequencia[10], notas[10], iteracao;
  char conceitos[5] = {'A', 'B' , 'C', 'D', 'F'};

  // Populando os vetores:
  for(iteracao = 0; iteracao < 10; iteracao++){
    cout << "preencha os dados do aluno " << iteracao + 1 << endl;
    cout << "O aluno desistiu do curso? 1 - Sim --- 0 - Não \n Digite aqui -> ";
    cin >> status_curso[iteracao];
    cout << "Quantidade de frequencia(0 - 5)\nDigite aqui -> ";
    cin >> frequencia[iteracao];
    cout << "Qual a nota do aluno? (0 - 10)\nDigite aqui -> ";
    cin >> notas[iteracao];
  }

  // Verificando os valores inseridos:
  for(iteracao = 0; iteracao < 10; iteracao++){
    cout << "Dados do aluno " << iteracao + 1 << ":\n\n";
    if(status_curso[iteracao] == 0){
      if(frequencia[iteracao] < 3){
        cout << "O aluno " << iteracao + 1 << " recebeu conceito " << conceitos[4] << "\n";
        cout << "Nota do aluno " << iteracao + 1 << " -> " << nota[iteracao]; << "\n";
        cout << "Quantidade de frequencia do aluno " << iteracao + 1 << " -> " << frequencia[iteracao] << "\n";
      }
      else{
        cout << "Frequencia do aluno -> " << frequencia[iteracao] << " aulas assistidas.\n";
        cout << "Nota do aluno " << iteracao + 1 << " -> " << notas[iteracao];
        // Verificando conceito com base na nota:
        if(notas[iteracao] >= 9){
          cout << "conceito do aluno " << iteracao + 1 << " -> " << conceitos[0];
        }
        else if(notas[iteracao] >= 7.5){
          cout << "conceito do aluno " << iteracao + 1 << " -> " << conceitos[1];
        }
        else if(notas[iteracao] >= 6 && notas[iteracao]){
            cout << "conceito do aluno " << iteracao + 1 << " -> " << conceitos[2];
        }
        else{
          cout << "conceito do aluno " << iteracao + 1 << " -> " << conceitos[3];
        }
      }
    }
    else{
      cout << "O aluno " << iteracao + 1 << " desistiu do curso.\n";
    }
  }


  // 3 - Gerando valores randomicos entre 0  e 110 e verificando os valores com 'switch':
  // #include <random>
  std::random_device rd;
  std::default_random_engine eng(rd());
  std::distribuicao_uniforme_inteiros<int> distr(0, 110);
  int i;
  for(i = 0; i < 100; i++){
    cout << distr(eng) << ";" << endl;
  }


  // * Calculo de aumento de salário de um determinado funcionário em uma empresa de acordo com o seu cargo:
  string nome_funcionario, cargo_funcionario;
  double salario_base, salario_aumentado;
  int porcentagem_aumento;

  cout << "Olá, qual o seu nome?\nDigite aqui -> ";
  cin >> nome_funcionario;

  cout << "\n\nQual o seu cargo?\nDigite aqui -> ";
  cin >> cargo_funcionario;

  // Obtendo o valor de porcentagem do aumento:
  if(cargo_funcionario == "gerente"){
      porcentagem = 0.10;
  }
  else if (cargo_funcionario == "engenheiro"){
    porcentagem = 0.20;
  }
  else if(cargo_funcionario == "programador"){
    porcentagem = 0.50;
  }
  else{
    porcentagem = 0.40;
  }

  // Obtendo o salário base:
  cout << "\n\nCerto, agora me diga o seu salário base.\nDigite aqui -> ";
  cin >> salario_base;

  // Calculando salário com aumento:
  salario_aumentado = salario_aumentado + (salario_base * porcentagem);
  cout << "O valor de seu salário com o aumento devido é -> " << salario_aumentado << endl;

  // calculando diferença:
  diferenca_entre_salario = salario_aumentado - salario_base;
  cout << "\n\n A diferença entre o seu salário base e o salário com aumento é -> " << diferenca_entre_salario << endl;


  // * Calculando salários de funcionários enquanto o usuário quiser:
  do{
    boolean condicao_parada = false;
    string nome_funcionario, cargo_funcionario;
    double salario_base, salario_aumentado;
    int porcentagem_aumento;

    cout << "Olá, qual o seu nome?\nDigite aqui -> ";
    cin >> nome_funcionario;

    cout << "\n\nQual o seu cargo?\nDigite aqui -> ";
    cin >> cargo_funcionario;

    // Obtendo o valor de porcentagem do aumento:
    if(cargo_funcionario == "gerente"){
        porcentagem_aumento = 0.10;
    }
    else if (cargo_funcionario == "engenheiro"){
      porcentagem_aumento = 0.20;
    }
    else if(cargo_funcionario == "programador"){
      porcentagem_aumento = 0.50;
    }
    else{
      porcentagem_aumento = 0.40;
    }

    // Obtendo o salário base:
    cout << "\n\nCerto, agora me diga o seu salário base.\nDigite aqui -> ";
    cin >> salario_base;

    // Calculando salário com aumento:
    salario_aumentado = salario_ + (salario_base * porcentagem_aumento);
    cout << "O valor de seu salário com o aumento devido é -> " << salario_aumentado << endl;

    // calculando diferença:
    diferenca_entre_salario = salario_aumentado - salario_base;
    cout << "\n\n A diferença entre o seu salário base e o salário com aumento é -> " << diferenca_entre_salario << endl;

    // verificando decisão do usuário:
    char decisao;
    cout << "\n\n\nVoce deseja calcular outro salario?\nS - Sim --- N - Nao\ndigite aqui -> ";
    cin >> decisao;
    if(decisao == 'S' || decisao == 's'){
      continue;
    }
    else if(decisao == 'N' || decisao == 'n'){
        condicao_parada = true;
    }
    else{
      do{
        cout << "\n O valor de sua decisao eh invalido\nDigite 'S' ou 'N'\nDigite aqui -> "
        cin >> decisao;
      }while(decisao != 'S' || decisao != 'N');

      if(decisao == 'S' || decisao == 's'){
        continue;
      }
      else{
        condicao_parada = false;
      }
    }
  }while(condicao_parada = false);

  cout << "\nPROGRAMA FINALIZADO!"


  // * Calculando salário para um determinado número de funcionários que o usuário escolhe:
  int quantidade_calculos;
  cout << "Ola, quantos salarios de funcionarios de sua empresa voce quer calcular hoje?\nDigite aqui -> "
  cin >> quantidade_calculos;

  // Verificando se usuário digitou um número válido:
  while (quantidade_calculos <= 0){
      cout << quantidade_calculos << " nao eh um numero valido\nDigite um novo numero aqui -> "
      cin >> quantidade_calculos;
  }

  // Calculando os salários:
  for(int i = 0; i < quantidade_calculos; i++){
    cout << "\n# Calculo de salario do funcionario " << i + 1;

    string nome_funcionario, cargo_funcionario;
    double salario_base, salario_aumentado;
    int porcentagem_aumento;

    cout << "\nOlá, qual o seu nome?\nDigite aqui -> ";
    cin >> nome_funcionario;

    cout << "\n\nQual o seu cargo?\nDigite aqui -> ";
    cin >> cargo_funcionario;

    // Obtendo o valor de porcentagem do aumento:
    if(cargo_funcionario == "gerente"){
        porcentagem = 0.10;
    }
    else if (cargo_funcionario == "engenheiro"){
      porcentagem = 0.20;
    }
    else if(cargo_funcionario == "programador"){
      porcentagem = 0.50;
    }
    else{
      porcentagem = 0.40;
    }

    // Obtendo o salário base:
    cout << "\n\nCerto, agora me diga o seu salário base.\nDigite aqui -> ";
    cin >> salario_base;

    // Calculando salário com aumento:
    salario_aumentado = salario_aumentado + (salario_base * porcentagem);
    cout << "O valor de seu salário com o aumento devido é -> " << salario_aumentado << endl;

    // calculando diferença:
    diferenca_entre_salario = salario_aumentado - salario_base;
    cout << "\n\n A diferença entre o seu salário base e o salário com aumento é -> " << diferenca_entre_salario << endl;
  }


  // * Implementação do calculo de salario de funcionarios usando struct:
  typedef struct funcionario{
    string nome_funcionario, cargo_funcionario;
    double salario_base, salario_aumentado;
  }Funcionario[10];

  int porcentagem_aumento, condicao_parada = 1, indice_funcionario_atual = 0;

  do{
    cout << "\n# Calculo do funcionario " << indice_funcionario_atual + 1 << "\n\nOlá, qual o seu nome?\nDigite aqui -> ";
    cin >> Funcionario[indice_funcionario_atual].nome_funcionario;

    cout << "\n\nQual o seu cargo?\nDigite aqui -> ";
    cin >> Funcionario[indice_funcionario_atual].cargo_funcionario;

    // Obtendo o valor de porcentagem do aumento:
    if(Funcionario[indice_funcionario_atual].cargo_funcionario == "gerente"){
        porcentagem_aumento = 0.10;
    }
    else if (Funcionario[indice_funcionario_atual].cargo_funcionario == "engenheiro "){
      porcentagem_aumento = 0.20;
    }
    else if(Funcionario[indice_funcionario_atual].cargo_funcionario == "programador"){
      porcentagem_aumento = 0.50;
    }
    else{
      porcentagem_aumento = 0.40;
    }

    // Obtendo o salário base:
    cout << "\n\nCerto, agora me diga o seu salário base.\nDigite aqui -> ";
    cin >> Funcionario[indice_funcionario_atual].salario_base;

    // Calculando salário com aumento:
    salario_aumentado = salario_base + (salario_base * porcentagem);
    cout << "O valor de seu salário com o aumento devido é -> " << salario_aumentado << endl;

    // calculando diferença:
    diferenca_entre_salario = salario_aumentado - salario_base;
    cout << "\n\n A diferença entre o seu salário base e o salário com aumento é -> " << diferenca_entre_salario << endl;

    // Verificando se usuário deseja prosseguir com o cálculo:
    cout << "\n\nDeseja calcular um novo salario?\n1 - Sim -- 2 - Nao";
    cin > condicao_parada;
    while(condicao_parada != 0 || condicao_parada != 1){
      cout << "\nO valor " << condicao_parada << " Nao eh um valor de escolha valido!\n\Digite novamente aqui -> ";
      cin >> condicao_parada;
    }

    // Incrementando índice
    indice_funcionario_atual++
  }while(condicao_parada = 1 && indice_funcionario_atual < 10);

  // Imprimindo dados armazenados após os calculos:
  for(int i = 0; i < indice_funcionario_atual + 1; i++){
      cout << "\nDados do funcionario " << i + 1 << ":";
      cout << "\nNome -> " << Funcionario[i].nome_funcionario;
      cout << "\nCargo -> " << Funcionario[i].cargo_funcionario;
      cout << "\nSalario base -> " << Funcionario[i].salario_base;
      cout << "\nSalario aumentado -> " << Funcionario[i].salario_aumentado;
      cout << "\n";
  }

  // Calculando o numero de gerentes, programadores e engenheiros na empresa:
  int quantidade_engenheiros, quantidade_programadores, quantidade_gerentes, quantidade_cargo_desconhecido;
  for(int i = 0; i < indice_funcionario_atual + 1; i++){
    if(Funcionario[indice_funcionario_atual].cargo_funcionario == "engenheiro"){
      quantidade_engenheiros++;
    }
    else if(Funcionario[indice_funcionario_atual].cargo_funcionario == "programador"){
      quantidade_programadores++;
    }
    else if(Funcionario[indice_funcionario_atual].cargo_funcionario == "gerente"){
      quantidade_gerentes++;
    }
    else{
      quantidade_cargo_desconhecido++;
    }
  }

  // Calculando custo geral antes e depois dos aumentos calculados:
