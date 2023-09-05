#include <stdio.h>

main(){
    // Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário.

    float salarioAtual, salarioreajustado;
    int tempoDeServico;

    printf("Digite o salario atual do fucionario: ");
    scanf("%f", &salarioAtual);

    printf("Digite o tempo de serviço do funcionario (em anos): ");
    scanf("%d", &tempoDeServico);

    if(salarioAtual <= 500.0){
        salarioreajustado = salarioAtual + (salarioAtual * 0.25);
    }
    else if (salarioAtual <= 1000.0){
        salarioreajustado = salarioAtual + (salarioAtual * 0.20);
    }
    else if (salarioAtual <= 1500.0){
        salarioreajustado = salarioAtual + (salarioAtual * 0.15);
    }
    else if (salarioAtual <= 2000.0){
        salarioreajustado = salarioAtual + (salarioAtual * 0.10);
    }
    else{
        salarioreajustado = salarioAtual;
    }

    if(tempoDeServico <1){
        salarioreajustado += 0;
    }
    else if(tempoDeServico <= 3){
        salarioreajustado +=100.0;
    }
        else if(tempoDeServico <= 6){
        salarioreajustado +=200.0;
    }
    else if(tempoDeServico <= 10){
        salarioreajustado +=500.0;
    }

    if(salarioreajustado == salarioAtual){
        printf("O funcionario nao tem direito a aumento./n ");
    }
    else{
        printf("O novo salario reajustado e: %.2f/n", salarioreajustado);
    }

    return 0;

}