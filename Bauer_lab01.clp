(deffacts startup
  (ojciec Adam Kain)
  (ojciec Adam Abel)
  (ojciec Adam Set)
  (matka Ewa Kain)
  (matka Ewa Abel)
  (matka Ewa Set)
)

(defrule reg1
  (ojciec ?x ?y)
  =>
  (assert(bezp_przodek ?x ?y))
  (printout t ?x " jest bezposrednim przodkiem " ?y crlf)
)
  
(defrule reg2
  (przodek ?x ?y)
  (bezp_przodek ?y ?z)
  =>
  (assert (przodek ?x ?z))
  (printout t ?x " jest przodkiem " ?x crlf)
)

(defrule reg3
  (przodek ?x ?y)
  =>
  (assert (spokrew ?y ?x))
  (printout t ?y " jest spokrewniony z " ?x crlf)
)

(defrule reg4
  (or(brat ?x ?y)
  (sisotra ?x ?y))
  =>
  (assert (spokrew ?y ?x))
  (printout t ?y " jest spokrewniony z " ?x crlf)
)

(defrule reg5
  (spokrew ?x ?y)
  (or(brat ?x ?y)
  (sisotra ?x ?y))
  =>
  (assert (spokrew ?y ?x))
  (printout t ?y " jest spokrewniony z " ?x crlf)
)
