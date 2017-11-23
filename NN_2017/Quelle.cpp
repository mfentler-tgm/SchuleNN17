

#include "N.h" 


int main() {

	N n{ topologie{ 2,3,1 }, 0.9, activationMethodchoosen::eins_durch_ehoch };
	
	// or on the heap
	// N* pn = new N{ topologie{ 2,3,1 }, 0.9, activationMethodchoosen::eins_durch_ehoch };
	// which requires pn->nod[0][0]

	std::chrono::high_resolution_clock::time_point timex;
	std::chrono::nanoseconds elapsed;
	// � 1 sec == 1 000 000 000 Nanosekunden

	timex = std::chrono::high_resolution_clock::now();
	if (1) // proper sequence for teaching
		for (int it = 0; it < 1000; ++it) {
			n.nod[0][0] = 0.0;
			n.nod[0][1] = 0.0;
			n.tru[0] = 0.0;
			n.calc();
			n.nod[0][0] = 0.0;
			n.nod[0][1] = 1.0;
			n.tru[0] = 1.0;
			n.calc();
			n.nod[0][0] = 1.0;
			n.nod[0][1] = 0.0;
			n.tru[0] = 1.0;
			n.calc();
			n.nod[0][0] = 1.0;
			n.nod[0][1] = 1.0;
			n.tru[0] = 0.0;
			n.calc();
		}
	elapsed = std::chrono::high_resolution_clock::now() - timex;


	if (1) {
		cout << "Ergebnis mit 1000 Iteration:" << endl;
		n.nod[0][0] = 0.0;
		n.nod[0][1] = 0.0;
		n.tru[0] = 0.0;
		cout << n.nod[0][0] << n.nod[0][1] << " -> " << n.tru[0] << " return = " << n.calc() << endl;
		n.nod[0][0] = 0.0;
		n.nod[0][1] = 1.0;
		n.tru[0] = 1.0;
		cout << n.nod[0][0] << n.nod[0][1] << " -> " << n.tru[0] << " return = " << n.calc() << endl;
		n.nod[0][0] = 1.0;
		n.nod[0][1] = 0.0;
		n.tru[0] = 1.0;
		cout << n.nod[0][0] << n.nod[0][1] << " -> " << n.tru[0] << " return = " << n.calc() << endl;
		n.nod[0][0] = 1.0;
		n.nod[0][1] = 1.0;
		n.tru[0] = 0.0;
		cout << n.nod[0][0] << n.nod[0][1] << " -> " << n.tru[0] << " return = " << n.calc() << endl;
	}

	std::cout << "Elapsed time in seconds = " << elapsed.count() / 1000000000.0 << std::endl;


	timex = std::chrono::high_resolution_clock::now();
	if (1) // proper sequence for teaching
		for (int it = 0; it < 1000000; ++it) {
			n.nod[0][0] = 0.0;
			n.nod[0][1] = 0.0;
			n.tru[0] = 0.0;
			n.calc();
			n.nod[0][0] = 0.0;
			n.nod[0][1] = 1.0;
			n.tru[0] = 1.0;
			n.calc();
			n.nod[0][0] = 1.0;
			n.nod[0][1] = 0.0;
			n.tru[0] = 1.0;
			n.calc();
			n.nod[0][0] = 1.0;
			n.nod[0][1] = 1.0;
			n.tru[0] = 0.0;
			n.calc();
		}
	elapsed = std::chrono::high_resolution_clock::now() - timex;


	if (1) {
		cout << "Ergebnis mit x1000000 Iteration:" << endl;
		n.nod[0][0] = 0.0;
		n.nod[0][1] = 0.0;
		n.tru[0] = 0.0;
		cout << n.nod[0][0] << n.nod[0][1] << " -> " << n.tru[0] << " return = " << n.calc() << endl;
		n.nod[0][0] = 0.0;
		n.nod[0][1] = 1.0;
		n.tru[0] = 1.0;
		cout << n.nod[0][0] << n.nod[0][1] << " -> " << n.tru[0] << " return = " << n.calc() << endl;
		n.nod[0][0] = 1.0;
		n.nod[0][1] = 0.0;
		n.tru[0] = 1.0;
		cout << n.nod[0][0] << n.nod[0][1] << " -> " << n.tru[0] << " return = " << n.calc() << endl;
		n.nod[0][0] = 1.0;
		n.nod[0][1] = 1.0;
		n.tru[0] = 0.0;
		cout << n.nod[0][0] << n.nod[0][1] << " -> " << n.tru[0] << " return = " << n.calc() << endl;
	}

	std::cout << "Elapsed time in seconds = " << elapsed.count() / 1000000000.0 << std::endl;

	timex = std::chrono::high_resolution_clock::now();
	if (1) // proper sequence for teaching
		for (int it = 0; it < 40000000; ++it) {
			n.nod[0][0] = 0.0;
			n.nod[0][1] = 0.0;
			n.tru[0] = 0.0;
			n.calc();
			n.nod[0][0] = 0.0;
			n.nod[0][1] = 1.0;
			n.tru[0] = 1.0;
			n.calc();
			n.nod[0][0] = 1.0;
			n.nod[0][1] = 0.0;
			n.tru[0] = 1.0;
			n.calc();
			n.nod[0][0] = 1.0;
			n.nod[0][1] = 1.0;
			n.tru[0] = 0.0;
			n.calc();
		}
	elapsed = std::chrono::high_resolution_clock::now() - timex;


	if (1) {
		cout << "Ergebnis mit 40000000 Iteration:" << endl;
		n.nod[0][0] = 0.0;
		n.nod[0][1] = 0.0;
		n.tru[0] = 0.0;
		cout << n.nod[0][0] << n.nod[0][1] << " -> " << n.tru[0] << " return = " << n.calc() << endl;
		n.nod[0][0] = 0.0;
		n.nod[0][1] = 1.0;
		n.tru[0] = 1.0;
		cout << n.nod[0][0] << n.nod[0][1] << " -> " << n.tru[0] << " return = " << n.calc() << endl;
		n.nod[0][0] = 1.0;
		n.nod[0][1] = 0.0;
		n.tru[0] = 1.0;
		cout << n.nod[0][0] << n.nod[0][1] << " -> " << n.tru[0] << " return = " << n.calc() << endl;
		n.nod[0][0] = 1.0;
		n.nod[0][1] = 1.0;
		n.tru[0] = 0.0;
		cout << n.nod[0][0] << n.nod[0][1] << " -> " << n.tru[0] << " return = " << n.calc() << endl;
	}

	std::cout << "Elapsed time in seconds = " << elapsed.count() / 1000000000.0 << std::endl;

	getchar();
	return 0;
}