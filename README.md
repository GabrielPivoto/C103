<img align="right" width="250" height="194" src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/ISO_C%2B%2B_Logo.svg/306px-ISO_C%2B%2B_Logo.svg.png">

# C103
Repositório para a monitoria de C103

<h4 align="center"> 
	Autor :pencil2:
</h4>

<p align="center">
 <a href="https://github.com/GabrielPivoto">Gabriel Pivoto</a> 
</p>

## Como instalar o WSL
* Baixe e instale alguma versão do Ubuntu na [Microsoft Store](https://www.microsoft.com/en-us/p/ubuntu-2004-lts/9n6svws3rx71#activetab=pivot:overviewtab);
* Execute o seguinte comando no PowerShell:
    ```
	wsl --install
	```
* Após a instalação, configure o ambiente.
* Faça a instalação do g++ pelo seguinte comando: 
    ```
	sudo apt install g++
	```

## Como compilar um código .cpp pelo WSL
* Após ter criado o código no VS Code, abra o terminal do Ubuntu;
* Para gerar o executável, rode o seguinte comando:
    ```
	g++ nomeAqruivo.cpp -o nomeExecutavel
	```
* g++ é o compilador instalado;
* -o é o comando utilizado para criar um executável;
* nomeExecutavel pode ser qualquer nome que você queira dar;
* Por fim, execute o comando:
    ```
	./nomeExecutavel
	```