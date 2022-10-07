#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream imagem;
	imagem.open("./imagens/imagem_ROB.ppm");

	if (imagem.is_open())
		// CABEÇALHO
	imagem << "P3" << endl;				// imagm tipo PixMap  ".ppm"
	imagem << "3 2" << endl;			// tamanho da imagem
	imagem << "255" << endl;			// Maior valor de cor RGB
	// CORPO
	// Tripletas RGB
	imagem << "255 -1 -1" << endl;		// vermelho
	imagem << "0 255 0" << endl;		// verde
	imagem << "0 0 255" << endl;		// azul
	imagem << "255 255 0" << endl;		// amarelo
	imagem << "255 255 255" << endl;	// branco
	imagem << "0 0 0" << endl;			// preto

	// Fechamento de imagem
	imagem.close();

}
