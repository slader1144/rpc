struct vectores {

	int vector1[10];
	int vector2[10];

};

program PROGRAMA_PUNTO{
	version VERSION_PUNTO{
		int p_Punto(vectores) = 1;
		double rango_Medio(vectores)=2;
		
	}=1;
}=0x20000001;
