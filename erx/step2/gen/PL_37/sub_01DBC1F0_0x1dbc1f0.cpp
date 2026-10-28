#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01DBC1F0
// Address: 0x1dbc1f0 - 0x1dbc260
void sub_01DBC1F0_0x1dbc1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBC1F0_0x1dbc1f0");
#endif

    switch (ctx->pc) {
        case 0x1dbc214u: goto label_1dbc214;
        case 0x1dbc224u: goto label_1dbc224;
        case 0x1dbc230u: goto label_1dbc230;
        case 0x1dbc240u: goto label_1dbc240;
        default: break;
    }

    ctx->pc = 0x1dbc1f0u;

    // 0x1dbc1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbc1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbc1f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbc1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbc1f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dbc1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dbc1fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbc1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbc200: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dbc200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc204: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbc204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbc208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbc208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc20c: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBC20Cu;
    SET_GPR_U32(ctx, 31, 0x1DBC214u);
    ctx->pc = 0x1DBC210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC20Cu;
    // 0x1dbc210: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBC20Cu, 0x1DBC214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC214u;
label_1dbc214:
    // 0x1dbc214: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1dbc214u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1dbc218: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1dbc218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1dbc21c: 0xc76ef42  jal         func_1DBBD08
    ctx->pc = 0x1DBC21Cu;
    SET_GPR_U32(ctx, 31, 0x1DBC224u);
    ctx->pc = 0x1DBC220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC21Cu;
    // 0x1dbc220: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBD08u, 0x1DBC21Cu, 0x1DBC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC224u;
label_1dbc224:
    // 0x1dbc224: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbc224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbc228: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBC228u;
    SET_GPR_U32(ctx, 31, 0x1DBC230u);
    ctx->pc = 0x1DBC22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC228u;
    // 0x1dbc22c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBC228u, 0x1DBC230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC230u;
label_1dbc230:
    // 0x1dbc230: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1dbc230u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1dbc234: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1dbc234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1dbc238: 0xc76ef42  jal         func_1DBBD08
    ctx->pc = 0x1DBC238u;
    SET_GPR_U32(ctx, 31, 0x1DBC240u);
    ctx->pc = 0x1DBC23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC238u;
    // 0x1dbc23c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBD08u, 0x1DBC238u, 0x1DBC240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC240u;
label_1dbc240:
    // 0x1dbc240: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1dbc240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1dbc244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbc244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc248: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dbc248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc24c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbc24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbc250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbc250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbc254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbc258: 0x876ee6c  j           func_1DBB9B0
    ctx->pc = 0x1DBC258u;
    ctx->pc = 0x1DBC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC258u;
    // 0x1dbc25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB9B0u;
    sub_01DBB9B0_0x1dbb9b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBC260u;
}
