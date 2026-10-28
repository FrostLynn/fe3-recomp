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

// Function: sub_01C81EF8
// Address: 0x1c81ef8 - 0x1c81f68
void sub_01C81EF8_0x1c81ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81EF8_0x1c81ef8");
#endif

    switch (ctx->pc) {
        case 0x1c81f1cu: goto label_1c81f1c;
        case 0x1c81f2cu: goto label_1c81f2c;
        case 0x1c81f38u: goto label_1c81f38;
        case 0x1c81f48u: goto label_1c81f48;
        default: break;
    }

    ctx->pc = 0x1c81ef8u;

    // 0x1c81ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c81ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c81efc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c81efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c81f00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c81f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c81f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c81f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c81f08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c81f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81f0c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c81f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c81f10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c81f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81f14: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C81F14u;
    SET_GPR_U32(ctx, 31, 0x1C81F1Cu);
    ctx->pc = 0x1C81F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81F14u;
    // 0x1c81f18: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C81F14u, 0x1C81F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81F1Cu;
label_1c81f1c:
    // 0x1c81f1c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c81f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c81f20: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c81f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c81f24: 0xc720684  jal         func_1C81A10
    ctx->pc = 0x1C81F24u;
    SET_GPR_U32(ctx, 31, 0x1C81F2Cu);
    ctx->pc = 0x1C81F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81F24u;
    // 0x1c81f28: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81A10u, 0x1C81F24u, 0x1C81F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81F2Cu;
label_1c81f2c:
    // 0x1c81f2c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c81f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c81f30: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C81F30u;
    SET_GPR_U32(ctx, 31, 0x1C81F38u);
    ctx->pc = 0x1C81F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81F30u;
    // 0x1c81f34: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C81F30u, 0x1C81F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81F38u;
label_1c81f38:
    // 0x1c81f38: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c81f38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c81f3c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c81f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c81f40: 0xc720684  jal         func_1C81A10
    ctx->pc = 0x1C81F40u;
    SET_GPR_U32(ctx, 31, 0x1C81F48u);
    ctx->pc = 0x1C81F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81F40u;
    // 0x1c81f44: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81A10u, 0x1C81F40u, 0x1C81F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81F48u;
label_1c81f48:
    // 0x1c81f48: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c81f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c81f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c81f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81f50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c81f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c81f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c81f58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c81f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c81f5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c81f5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c81f60: 0x87203ea  j           func_1C80FA8
    ctx->pc = 0x1C81F60u;
    ctx->pc = 0x1C81F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81F60u;
    // 0x1c81f64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80FA8u;
    sub_01C80FA8_0x1c80fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C81F68u;
}
