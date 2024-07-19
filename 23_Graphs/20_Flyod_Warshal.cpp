void floydWarshal(int n) {
		vector<vector<int> > dist(n , vector<int>(n,1e9));
		//diagnol pr zero mark krdo
		for(int i=0; i<n; i++) {
			dist[i][i] = 0;
		}
		//graph k according dist insert krdia h
		for(auto t: adjList) {
			for(auto nbr: t.second) {
				int u = t.first;
				int v = nbr.first;
				int wt = nbr.second;
				dist[u][v] = wt;
			}
		}

		for(int helper=0; helper<n; helper++) {
			for(int src =0; src<n; src++) {
				for(int dest=0; dest<n; dest++) {
					dist[src][dest] = min(dist[src][dest], dist[src][helper] + dist[helper][dest]);
				}
			}
		}

		cout << "Printing distance array: " << endl;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cout << dist[i][j]<< ", ";
			}
			cout << endl;
		}
		
	}