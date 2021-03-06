
##############################
# Country definition for SAL #
##############################

province =
{ id         = 759
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # San Salvador

#####################
# Country main data #
#####################

country =
{ tag                    = SAL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2667 
  supply = 0.0133 
  production = 0.6666 
  reinforcement = 0.0534 
  upgrading = 0.0000 
  manpower               = 4.9 # 5 - building queue
  capital                = 759
  transports             = 5
  escorts                = 1
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 759 }
  ownedprovinces         = { 759 }
  controlledprovinces    = { 759 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5190 6010 }
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 77001 }
  headofgovernment       = { type = 9 id = 77002 }
  foreignminister        = { type = 9 id = 77003 }
  armamentminister       = { type = 9 id = 77004 }
  ministerofsecurity     = { type = 9 id = 77005 }
  ministerofintelligence = { type = 9 id = 77006 }
  chiefofstaff           = { type = 9 id = 77007 }
  chiefofarmy            = { type = 9 id = 77008 }
  chiefofnavy            = { type = 9 id = 77009 }
  chiefofair             = { type = 9 id = 77010 }
  landunit =
  { id       = { type = 21600 id = 70 }
    name     = "Ejercito del Salvador"
    location = 759
    division =
    { id       = { type = 21600 id = 7000 }
      name     = "I Brigada de Infanterķa"
      strength = 40
      type     = infantry
      extra    = anti_air
    }
  } 
	province_development = { 
		id = { type = 21600 id = 71 } 
		name = "" 
		progress = 0.0000 
		location = 759 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = january 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2737 
		days_for_first = 180 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
}
