# optionPricerRysiejko
This repository contains an assignmetn for the Applied Finance 2020Z course, for module: Path-dependent option pricing
with Monte Carlo and Rcpp package.

The aim of the project was to create an R package with RCCP, that performs Monte Carlo simulation. Package named **optionPricerRysiejko** contains function *getEuropeanDownAndOutPutPrice* allows for performing Monte Carlo simulation for \n
European Style Down-And-Out put option pricing. When calling this function, user can specify following characteristics:

* price of the underlying at the moment of option pricing: *S0*,
* strike price *K* 
* annualized volatility rate *σ* 
* annualized risk-free rate *r* 
* time to maturity *t* 
* barrier *L*
* number of simulations *N*

Function would then perform Monte Carlo *N* Monte Carlo simulations, and arrive at the theoritical price of an option.

