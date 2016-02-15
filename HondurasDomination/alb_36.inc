
##############################
# Country definition for ALB #
##############################

province =
{ id         = 390
  anti_air   = 1
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 2 current_size = 2 }
}              # Tirana

#####################
# Country main data #
#####################

country =
{ tag                    = ALB
  manpower               = -20
  transports             = 30
  escorts                = 3
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 390
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 7
    freedom           = 5
    professional_army = 5
    defense_lobby     = 4
    interventionism   = 1
  }
  nationalprovinces      = { 390 391 413 415 }
  ownedprovinces         = { 390 391 }
  controlledprovinces    = { 390 391 }
  # Eastern Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5080 6010 }
  diplomacy =
  { relation = { tag = ITA value = 10 }
  }
  headofstate            = { type = 9 id = 32001 }
  headofgovernment       = { type = 9 id = 32002 }
  foreignminister        = { type = 9 id = 32003 }
  armamentminister       = { type = 9 id = 32004 }
  ministerofsecurity     = { type = 9 id = 32005 }
  ministerofintelligence = { type = 9 id = 32006 }
  chiefofstaff           = { type = 9 id = 32007 }
  chiefofarmy            = { type = 9 id = 32008 }
  chiefofnavy            = { type = 9 id = 32009 }
  chiefofair             = { type = 9 id = 32010 }
}
