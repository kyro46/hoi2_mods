
##############################
# Country definition for PER #
##############################

province =
{ id         = 1497
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Bandar Abbas

#####################
# Country main data #
#####################

country =
{ tag                    = PER
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 1502
  manpower               = 95.6 # 96 - building queue
  consumer = 0.0000 
  supply = 0.0000 
  production = 1.0000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  transports             = 15
  escorts                = 3
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1495 1496 1497 1498 1499 1500 1501 1502 1503 1787 1788 1789 1825 1826 1859 }
  ownedprovinces         = { 1495 1496 1497 1498 1499 1500 1501 1502 1503 1787 1788 1789 1825 1826 1859 }
  controlledprovinces    = { 1495 1496 1497 1498 1499 1500 1501 1502 1503 1787 1788 1789 1825 1826 1859 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 }
  diplomacy =
  { relation = { tag = AFG value = 25 }
    relation = { tag = DEN value = 50 }
    relation = { tag = ENG value = 25 }
    relation = { tag = GER value = 4 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = SAU value = 100 }
    relation = { tag = SOV value = -20 }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = -50 }
	relation = { tag = ITA value = 4 }
	relation = { tag = ROM value = -9 }
	relation = { tag = SCH value = -22 }
  }
  headofstate            = { type = 9 id = 53001 }
  headofgovernment       = { type = 9 id = 53002 }
  foreignminister        = { type = 9 id = 53003 }
  armamentminister       = { type = 9 id = 53004 }
  ministerofsecurity     = { type = 9 id = 53005 }
  ministerofintelligence = { type = 9 id = 53006 }
  chiefofstaff           = { type = 9 id = 53007 }
  chiefofarmy            = { type = 9 id = 53008 }
  chiefofnavy            = { type = 9 id = 53009 }
  chiefofair             = { type = 9 id = 53010 }
  landunit =
  { location = 1502
    name     = "Lasgar Parsi"
    id       = { type = 16600 id = 1 }
    division =
    { id    = { type = 16600 id = 2 }
      name  = "1. Dastebandi Sarbaze Piyade"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 16600 id = 3 }
      name = "1. Dastebandi Savareh"
      type = cavalry
    }
  } 
	province_development = { 
		id = { type = 16600 id = 7 } 
		name = "" 
		progress = 0.0000 
		location = 1825 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = july 
			day = 14 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2715 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 16600 id = 4 } 
		name = "" 
		progress = 0.0000 
		location = 1502 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = july 
			day = 14 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2715 
		days_for_first = 180 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 16600 id = 6 } 
		name = "" 
		progress = 0.0000 
		location = 1496 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = june 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 3377 
		days_for_first = 300 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 16600 id = 5 } 
		name = "" 
		progress = 0.0000 
		location = 1500 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = may 
			day = 1 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 12 
		done = 0 
		days = 2715 
		days_for_first = 180 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
