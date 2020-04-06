#ifndef OPENFPGA_SDC_H
#define OPENFPGA_SDC_H

/********************************************************************
 * Include header files that are required by function declaration
 *******************************************************************/
#include "command.h"
#include "command_context.h"
#include "openfpga_context.h"

/********************************************************************
 * Function declaration
 *******************************************************************/

/* begin namespace openfpga */
namespace openfpga {

void write_pnr_sdc(OpenfpgaContext& openfpga_ctx,
                   const Command& cmd, const CommandContext& cmd_context); 

void write_analysis_sdc(OpenfpgaContext& openfpga_ctx,
                        const Command& cmd, const CommandContext& cmd_context);

} /* end namespace openfpga */

#endif
