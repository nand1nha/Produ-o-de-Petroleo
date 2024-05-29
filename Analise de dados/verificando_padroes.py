import pandas as pd
import numpy as np
import plotly.express as px
tabela = pd.read_csv("Produção de petróleo.csv", sep=';')
# tabela = tabela.replace({',': '.'}, regex=True)
# tabela['PRODUÇÃO DE PETRÓLEO'] = tabela['PRODUÇÃO DE PETRÓLEO'].astype('float')

# tabela.groupby(['REGIÃO GEOGRÁFICA','ANO','PRODUÇÃO DE PETRÓLEO']).sum().drop(['PAÍS','BLOCO'], axis=1).reset_index()

# grafico = px.histogram(tabela, x ='PRODUÇÃO DE PETRÓLEO', y ='REGIÃO GEOGRÁFICA', color='REGIÃO GEOGRÁFICA')
# grafico.show()

# for coluna in tabela:
#      grafico = px.histogram(tabela, x =coluna, color='REGIÃO GEOGRÁFICA')
#      grafico.show()

# grafico = px.histogram(tabela, x = 'ANO', y = 'PRODUÇÃO DE PETRÓLEO', color='REGIÃO GEOGRÁFICA',nbins=20)
# grafico.show()

# import matplotlib.pyplot as plt
# x = tabela['PRODUÇÃO DE PETRÓLEO']
# y = tabela['ANO']
# plt.plot(x,y, label = 'dados')
# plt.show()

# grafico = px.histogram(tabela, x ='ANO', color='REGIÃO GEOGRÁFICA')
# grafico.show()

