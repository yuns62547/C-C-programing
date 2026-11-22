struct Body makeStudent(struct Body father, struct Body mother) {
    struct Body student;
    student.height = (int)((father.height + mother.height) / 2.0 + 5);
    double avg_weight = (father.weight + mother.weight) / 2.0 - 4.5;
    student.weight = (double)((int)(avg_weight * 10.0 + (avg_weight >= 0 ? 0.5 : -0.5))) / 10.0;
    return student;
}