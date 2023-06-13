# Sua organização acaba de contratar um estagiário para trabalhar no Suporte de Informática, com a intenção de fazer um levantamento nas sucatas encontradas nesta área. A primeira tarefa dele é testar todos os cerca de 200 mouses que se encontram lá, testando e anotando o estado de cada um deles, para verificar o que se pode aproveitar. Foi requisitado que você desenvolva um programa para registrar este levantamento. O programa deverá receber um número indeterminado de entradas, cada uma contendo: um número de identificação do mouse e o tipo de defeito:
# 1 - necessita de esfera
# 2 - necessita de limpeza
# 3 - necessita troca do cabo ou conector
# 4 - mouse quebrado ou inutilizado

# Uma identificação igual a zero encerra o programa. Ao final o programa deverá emitir um relatório constando a quantidade de mouses verificados, quais possuem cada categoria de defeito e a porcentagem.

codigo_mouse = int(input("Código do mouse: "))
numero_mouses = 0
necessita_esfera = 0
necessita_limpeza = 0
necessita_cabo = 0
mouse_quebrado = 0

while codigo_mouse != 0:
    tipo_defeito = int(input("Digite o número correspondente ao estado do mouse:\n ""1- Necessita da esfera\n 2- Necessita de limpeza\n 3- Necessita troca do cabo ou conector\n 4- Mouse quebrado\n"))
    numero_mouses += 1
    print("-" * 10)
    codigo_mouse = int(input("Código do mouse: "))
    
    match tipo_defeito:
        case 1:
            necessita_esfera = necessita_esfera + 1
        case 2: 
            necessita_limpeza = necessita_limpeza + 1
        case 3:
            necessita_cabo = necessita_cabo + 1
        case 4:
            mouse_quebrado = mouse_quebrado + 1
    
    porc_esfera = (necessita_esfera / numero_mouses) * 100
    porc_limpeza = (necessita_limpeza / numero_mouses) * 100
    porc_cabo = (necessita_cabo / numero_mouses) * 100
    porc_quebrado = (mouse_quebrado / numero_mouses) * 100

        
print("Execução finalizada.")
print(f"Quantidade de mouses: {numero_mouses}")
print("\nRELATÓRIO FINAL")
print("Situação                         Quantidade           Percentual")
print(f"1- Necessita de esfera            {necessita_esfera}                        {porc_esfera:.2f}%")
print(f"2- Necessita de limpeza           {necessita_limpeza}                        {porc_limpeza:.2f}%")
print(f"3- Necessita de cabo              {necessita_cabo}                        {porc_cabo:.2f}%")
print(f"4- Mouse quebrado                 {mouse_quebrado}                        {porc_quebrado:.2f}%")
