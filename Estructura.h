typedef struct datosCarrera{
    int id;
    char nombre[30];
}carrera;

typedef struct datosEstudiante{
    char id [9];
    char cedula[16];
    char nombre[30];
    char apellidos[30];
    carrera c;
    int anioCurso;
    char email[100];
}estudiante;

