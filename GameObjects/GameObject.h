struct GameObject {
    int x, y;
    int w, h;

    GameObject(int x, int y, int w, int h);

    bool isCollided(GameObject other);
};