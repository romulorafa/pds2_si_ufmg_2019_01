#include <iostream>

// USE ESPAÇO ENTRE AS REPOSTAS. NÃO ENDLINE
int main()
{
    long value1 = 200000;
    long value2;

    // 1. Declare a variável long ptr como um ponteiro para um objeto do tipo long.
    long *ptr;
    // 2. Atribua o endereço da variável value1 à variável ponteiro long ptr
    ptr = &value1;
    // 3. IMPRIMA o valor do objeto apontado por long ptr
    std::cout << *ptr << " ";
    // 4. Atribua o valor do objeto apontado por long ptr à variável value2
    value2 = *ptr;
    // 5. IMPRIMA  o valor de value2.
    std::cout << value2 << " ";
    // 6. IMPRIMA o endereço de value1
    std::cout << &value1 << " ";
    // 7. IMPRIMA o endereço armazenado em long ptr. O valor impresso é o mesmo que o endereço de value1? SIM
    std::cout << ptr << " ";
    // 8. Declare um array do tipo unsigned int chamado values com cinco elementos e inicialize os elementos para os inteiros pares de 2 a 10.
    unsigned int values[] = {2, 4, 6, 8, 10};
    // 9. Declare um ponteiro vptr que aponta para um objeto do tipo unsigned int.
    unsigned int *vptr;
    //IMPRIMIR a comparação entre o endereço de value1 com o endereço armazenado em long ptr
    if (&value1 == ptr)
    {
        std::cout << "1"
                  << " ";
    }
    else
    {
        std::cout << "0"
                  << " ";
    }
    // 10. Utilize uma instrução for para IMPRIMIR os elementos do array values usando notação de array com [].
    for (int i = 0; i < 5; i++)
    {
        std::cout << values[i] << " ";
    }
    // 11. Escreva duas instruções separadas que atribuem o endereço inicial do array values à variável ponteiro vptr.
    vptr = &values[0];
    vptr = values;
    // 12. Utilize uma instrução for para IMPRIMIR os elementos do array values utilizando a notação de ponteiro/deslocamento.
    for (int i = 0; i < 5; i++)
    {
        std::cout << *vptr++ << " ";
    }
    // 13. Utilize uma instrução for para IMPRIMIR os elementos do array values utilizando a notação de ponteiro/deslocamento com o nome de array como o ponteiro.
    for (int i = 0; i < 5; i++)
    {
        std::cout << *(values + i) << " ";
    }
    // 14. Utilize uma instrução for para IMPRIMIR os elementos do array values utilizando [] no ponteiro para o array.
    vptr = values;
    for (int i = 0; i < 5; i++)
    {
        std::cout << vptr[i] << " ";
    }
    // 15. Referencie o quinto elemento de values utilizando a notação [] de array, a notação de ponteiro/deslocamento com o nome de array como o ponteiro, a notação de subscrito de ponteiro e a notação de ponteiro/deslocamento.
    vptr = values;
    std::cout << values[4] << " ";
    std::cout << *(values + 4) << " ";
    std::cout << vptr[4] << " ";
    std::cout << *(vptr + 4) << " ";
    // 16. Mostre que endereço é referenciado por vptr + 3, e que valor é armazenado nessa localização.
    vptr = values;
    vptr += 3;
    std::cout << vptr << " ";  //deslocamento em memória
    std::cout << *vptr << " "; // conteúdo apontado pelo endereço de memória em vptr
    // 17. Supondo que vptr aponte para values[4], que endereço é referenciado por vptr -= 4? Que valor é armazenado nessa localização?
    vptr = &values[4];
    std::cout << vptr << " ";
    vptr -= 4;
    std::cout << *vptr;

    return 0;
}