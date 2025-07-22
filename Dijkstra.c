//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAXN 1000005
//#define MOD 100003
//
//typedef struct {
//    int to;
//    int next;
//} Edge;
//
//Edge edges[MAXN * 2];  
//int head[MAXN], edgeCount;a
//int dist[MAXN], count[MAXN];
//int queue[MAXN], front, rear;
//
//void addEdge(int x, int y) {
//    edges[edgeCount].to = y;
//    edges[edgeCount].next = head[x];
//    head[x] = edgeCount++;
//}
//
//void bfs(int start, int n) {
//    memset(dist, -1, sizeof(dist));
//    dist[start] = 0;
//    count[start] = 1;
//    front = rear = 0;
//    queue[rear++] = start;
//
//    while (front < rear) {
//        int u = queue[front++];
//        for (int i = head[u]; i != -1; i = edges[i].next) {
//            int v = edges[i].to;
//            if (dist[v] == -1) {  
//                dist[v] = dist[u] + 1;
//                count[v] = count[u];
//                queue[rear++] = v;
//            }
//            else if (dist[v] == dist[u] + 1) {  
//                count[v] = (count[v] + count[u]) % MOD;
//            }
//        }
//    }
//}
//
//int main() {
//    int N, M;
//    scanf_s("%d %d", &N, &M);
//
//    memset(head, -1, sizeof(head));
//    edgeCount = 0;
//
//    for (int i = 0; i < M; i++) {
//        int x, y;
//        scanf_s("%d %d", &x, &y);
//        addEdge(x, y);
//        addEdge(y, x); 
//    }
//
//    bfs(1, N);
//
//    for (int i = 1; i <= N; i++) {
//        printf("%d\n", dist[i] == -1 ? 0 : count[i]);
//    }
//
//    return 0;
//}