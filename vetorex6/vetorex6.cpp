//ex1

#include <iostream>

int main() {
   
    int vetor[10];
   
    std::cout << "Digite 10 números: " << std::endl;
   for (int i = 0; i < 10; i++) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

   
   std::cout << "\nOs elementos do vetor são:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << vetor[i] << std::endl;
    }

    return 0;
}

//ex2
#include <iostream>

int main() {
   
    int vetor[7];
   int soma = 0;

  
    std::cout << "Digite 7 números: " << std::endl;
   for (int i = 0; i < 7; i++) {
        std::cout << "Elemento " << i + 1 << ": ";
       std::cin >> vetor[i];
       
        soma += vetor[i];
   }

  std::cout << "\nA soma dos elementos do vetor é: " << soma << std::endl;

    return 0;
}

//ex3

#include <iostream>

int main() {
   
   int idade18 = 18, idade17 = 17, idade16 = 16;
   int numAlunos18 = 3, numAlunos17 = 2, numAlunos16 = 12;

    
   int totalAlunos = numAlunos18 + numAlunos17 + numAlunos16;
    int somaIdades = (idade18 * numAlunos18) + (idade17 * numAlunos17) + (idade16 * numAlunos16);

    
   double mediaIdades = static_cast<double>(somaIdades) / totalAlunos;

   
    std::cout << "A média das idades dos alunos na sala é: " << mediaIdades << std::endl;

    return 0;
}

//ex4

#include <iostream>

int main() {
   
    int depositos[] = { 5, 9, 7, 10, 15, 23, 20, 30 };
    int totalDepositos = 0;

   
  for (int i = 0; i < sizeof(depositos) / sizeof(depositos[0]); i++) {
       totalDepositos += depositos[i];
    }

   std::cout << "O total depositado é: " << totalDepositos << std::endl;

   return 0;
}

//ex5

#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> vetor(10);

   
    std::cout << "Digite 10 números:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

   
    int opcao;
    std::cout << "\nEscolha uma opção:" << std::endl;
    std::cout << "1. Somar todos os elementos" << std::endl;
    std::cout << "2. Subtrair todos os elementos" << std::endl;
    std::cout << "3. Multiplicar todos os elementos" << std::endl;
    std::cout << "Opção: ";
    std::cin >> opcao;

    int resultado = 0;
    long long produto = 1;

    switch (opcao) {
    case 1:
       
        for (int i = 0; i < 10; i++) {
            resultado += vetor[i];
        }
        std::cout << "A soma de todos os elementos é: " << resultado << std::endl;
        break;
    case 2:
       
        for (int i = 0; i < 10; i++) {
            resultado -= vetor[i];
        }
        std::cout << "A subtração de todos os elementos é: " << resultado << std::endl;
        break;
    case 3:
        
        for (int i = 0; i < 10; i++) {
            produto *= vetor[i];
        }
        std::cout << "A multiplicação de todos os elementos é: " << produto << std::endl;
        break;
    default:
        std::cout << "Opção inválida." << std::endl;
    }

    return 0;
}




