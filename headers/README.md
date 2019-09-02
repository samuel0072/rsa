<h1>Arquivo: decrypt</h1>

<h2>Função void decrypt(LONG n, LONG e)</h2>
<p>Recebe (n, e) chave para decriptar e decriptografa a mensagem contida no arquivo output/message.txt. A saída fica em output/decrypted.txt</p>

<h1>Arquivo: decrypt</h1>

<p>define o separador que vai nas mensagens criptografadas e o tipo long long int como LONG</p>

<h1>Arquivo: encrypt</h1>

<h2>Função void encrypt(LONG n, LONG e, char message[]))</h2>
<p>Recebe (n, e) chave para criptografar e a mensagem contida em message</br>
o arquivo de saida fica em output/encrypted.txt
</p>
<h2>Função void encrypt(LONG n, LONG e, char message[]))</h2>
<p>Recebe uma string e verifica se ela esta no especificado para ser criptogarfada(caracteres em caixa baixa e apenas letras e espaço em branco)</p>


<h1>Arquivo: inverse</h1>

<h2>Função void create_table(LONG a, LONG b, node** n)</h2>
<p> recebe a e b inteiros e um endereço de memoria de um ponteiro para lista vazia</br>
preenche a lista com todos os resultados a/b assim como no algoritmo de euclides
</p>
<h2>Função LONG inverse_calc(LONG mod, LONG n)</h2>
<p>Calcula o inverso de n em mod</p>

<h1>Arquivo: list</h1>

<h2>Define o tipo node representando um nó de uma lista</h2>

<h2>Função node* create_empty_list()</h2>
<p>retorna uma lista vazia</p>

<h2>Função node* add_to_list(node* head, LONG info)</h2>
<p>adiciona info na cauda da lista</br>
recebe a cabeça da lista</br>
retorna a lista com o node info criado
</p>

<h2>Função LONG* list_to_array(node* head)</h2>
<p>Transforma a lista em um array do tipo LONG<br/>
recebe a cabeca da lista
</p>

<h2>Função int list_size(node* head)</h2>
<p>Retorna o tamanho da lista passada em head</p>

<h2>Função void clear_list(node* head)</h2>
<p>Desaloca a lista especificada em head da memoria</p>

<h2>Função void print_list(node* head)</h2>
<p>Escreve a lista head na tela</p>

<h1>Arquivo util</h1>
<h2>Função int countDig(LONG n)</h2>
<p>recebe um LONG n e retorna quantos digitos o mesmo possui</p>

<h2>Função char precod(char c)</h2>
<p>recebe um caracter, letras e espaço em branco, em caixa baixa e retorna sua representação no intervalor 0 - 26</p>

<h2>Função char decod(char c);</h2>
<p>recebe um caracter, letras e espaço em branco com representação no intervalo 0 - 26, e retorna seu valor na tabela ASCII</p>

<h1>Arquivo modulus</h1>

<h2>Função LONG codDecod(LONG n,LONG e, LONG block )</h2>

<p>recebe o trio (n, e, block) e retorna block^e mod n, (n, e)<br/>
 chaves para criptografar/decriptografar</p>

<h2>Função LONG pmodn(LONG z, LONG e,LONG n )</h2>

<p>recebe o trio (z, e, n) e calcula z^e mod n</p>

<h2>Função LONG mdc(LONG a,LONG b)</h2>

<p>Calcula o mdc entre a e b, com a > b</p>



