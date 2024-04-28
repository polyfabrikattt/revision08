if (x < 0 || y < 0 || z < 0 || a < 0 || b < 0 || c < 0) {
    return false;
}
if (x < y) {
    swap(x, y);
}
if (y < z) { 
    swap(y, z);
}
if (x < y) {
    swap(x, y);

}
if (a < b) { 
    swap(a, b); }
if (b < c) { swap(b, c);
}
if (a < b) { 
    swap(a, b);
}

return (a >= x && b >= y && c >= z);