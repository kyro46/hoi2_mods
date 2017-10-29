
##############################
# Country definition for COS #
##############################

province =
{ id         = 540
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # San José

#####################
# Country main data #
#####################

country =
{ tag                    = COS
  manpower               = 4.9 # 5 - building queue
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2920 
  supply = 0.0320 
  production = 0.6760 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 540
  transports             = 50
  escorts                = 6
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 540 }
  ownedprovinces         = { 540 }
  controlledprovinces    = { 540 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 }
  diplomacy =
  { relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 47001 }
  headofgovernment       = { type = 9 id = 47002 }
  foreignminister        = { type = 9 id = 47003 }
  armamentminister       = { type = 9 id = 47004 }
  ministerofsecurity     = { type = 9 id = 47005 }
  ministerofintelligence = { type = 9 id = 47006 }
  chiefofstaff           = { type = 9 id = 47007 }
  chiefofarmy            = { type = 9 id = 47008 }
  chiefofnavy            = { type = 9 id = 47009 }
  chiefofair             = { type = 9 id = 47010 }
  # Americas Group 1#
  landunit =
  { id       = { type = 25000 id = 1 }
    name     = "Ejercito de Costa Rica"
    location = 540
    division =
    { id       = { type = 25000 id = 2 }
      name     = "Brigada de Infantería Nro. 1"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
  } 
	province_development = { 
		id = { type = 25000 id = 3 } 
		name = "" 
		progress = 0.0000 
		location = 540 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = october 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2389 
		days_for_first = 265 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		}
}
