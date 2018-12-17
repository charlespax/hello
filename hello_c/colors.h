/******************************************************************************
 * Copyright (C) 2017 by Charles Edward Pax                                   *
 *                                                                            *
 * This file is a part of Hello                                               *
 *                                                                            *
 * Hello is an example program demonstrating several aspects of               *
 * C programming, Doxygen documentation, and Make.                            *
 *                                                                            *
 * Hello is distributed in the hope that it will be useful, but WITHOUT       *
 * ANY WARRANTY; eithout even the implied warranty of MERCHANTABILITY or      *
 * FITNESS FOR A PARTIFULAR PURPOSE. See the GNU Lesser General Public        *
 * License for more details.                                                  *
 *                                                                            *
 * You should have received a copy of the GNU Lesser General Public License   *
 * along with Box. If not, see <http://www.gnu.org/license/>.                 *
 *                                                                            *
 ******************************************************************************/

/**
 * \file colors.h
 * \author Charles Edward Pax <charles.pax@gmail.com>
 * \date 2017-07-18
 * \brief Defines colors and other effects using ASCII excape sequences
 *
 * \details This is where would be written a more in-depth explaination of
 * this file and what it does.
 *
 * \see http://paxinstruments.com/store/
 *
 */

#ifndef COLORS_H_
#define COLORS_H

#define ANSI_RESET         "\x1b[0m"
#define ANSI_BOLD          "\x1b[1m"
#define ANSI_FAINT         "\x1b[2m"
#define ANSI_ITALIC        "\x1b[3m"
#define ANSI_UNDERLINE     "\x1b[4m"
#define ANSI_BLINK_SLOW    "\x1b[5m"
#define ANSI_BLINK_RAPID   "\x1b[6m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_OVERLINE      "\x1b[53m"

#define BOLD ANSI_BOLD // 1m
#define UNDER ANSI_UNDERLINE // 4m
#define RED ANSI_COLOR_RED // 31m
#define GREEN ANSI_COLOR_GREEN // 32m
#define YELLOW ANSI_COLOR_YELLOW // 33m
#define BLUE ANSI_COLOR_BLUE //34m
#define MAGENTA ANSI_COLOR_MAGENTA // 35m
#define CYAN ANSI_COLOR_CYAN // 36m

#endif // COLORS_H__
