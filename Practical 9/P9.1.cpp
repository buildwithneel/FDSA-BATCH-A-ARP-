#include <iostream>
using namespace std;
int main() {
    int n, e, s;
    cout << "Enter number of buildings and roads: ";
    cin >> n >> e;
    int g[100][100] = {0};
    cout << "Enter the connections between buildings:\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cout << "Road " << i + 1 << ": ";
        cin >> u >> v;
        g[u][v] = 1;
        g[v][u] = 1;
    }
    cout << "Enter starting building: ";
    cin >> s;
    bool visited[100] = {false};
    cout << "\nDFS: ";
    int st[100], top = -1;
    st[++top] = s;
    while (top != -1) {
        int u = st[top--];
        if (visited[u])
            continue;
        visited[u] = true;
        cout << u << " ";
        for (int v = n - 1; v >= 0; v--) {
            if (g[u][v] && !visited[v])
                st[++top] = v;}}
    cout << "\n";
    for (int i = 0; i < n; i++)
        visited[i] = false;
    cout << "BFS: ";
    int q[100], front = 0, rear = 0;
    q[rear++] = s;
    visited[s] = true;
    while (front < rear) {
        int u = q[front++];
        cout << u << " ";
        for (int v = 0; v < n; v++) {
            if (g[u][v] && !visited[v]) {
                visited[v] = true;
                q[rear++] = v;}}}
    return 0;
}
