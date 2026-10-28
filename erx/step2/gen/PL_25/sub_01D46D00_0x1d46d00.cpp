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

// Function: sub_01D46D00
// Address: 0x1d46d00 - 0x1d46d70
void sub_01D46D00_0x1d46d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46D00_0x1d46d00");
#endif

    switch (ctx->pc) {
        case 0x1d46d24u: goto label_1d46d24;
        case 0x1d46d34u: goto label_1d46d34;
        case 0x1d46d40u: goto label_1d46d40;
        case 0x1d46d50u: goto label_1d46d50;
        default: break;
    }

    ctx->pc = 0x1d46d00u;

    // 0x1d46d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d46d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d46d04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d46d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d46d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d46d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d46d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d46d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d46d10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d46d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46d14: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d46d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d46d18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d46d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46d1c: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D46D1Cu;
    SET_GPR_U32(ctx, 31, 0x1D46D24u);
    ctx->pc = 0x1D46D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46D1Cu;
    // 0x1d46d20: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D46D1Cu, 0x1D46D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46D24u;
label_1d46d24:
    // 0x1d46d24: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d46d24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d46d28: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d46d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d46d2c: 0xc751a06  jal         func_1D46818
    ctx->pc = 0x1D46D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D46D34u);
    ctx->pc = 0x1D46D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46D2Cu;
    // 0x1d46d30: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D46818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D46818u, 0x1D46D2Cu, 0x1D46D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46D34u;
label_1d46d34:
    // 0x1d46d34: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d46d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d46d38: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D46D38u;
    SET_GPR_U32(ctx, 31, 0x1D46D40u);
    ctx->pc = 0x1D46D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46D38u;
    // 0x1d46d3c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D46D38u, 0x1D46D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46D40u;
label_1d46d40:
    // 0x1d46d40: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d46d40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d46d44: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d46d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d46d48: 0xc751a06  jal         func_1D46818
    ctx->pc = 0x1D46D48u;
    SET_GPR_U32(ctx, 31, 0x1D46D50u);
    ctx->pc = 0x1D46D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46D48u;
    // 0x1d46d4c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D46818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D46818u, 0x1D46D48u, 0x1D46D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46D50u;
label_1d46d50:
    // 0x1d46d50: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d46d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d46d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d46d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46d58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d46d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d46d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d46d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d46d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d46d64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d46d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d46d68: 0x875176a  j           func_1D45DA8
    ctx->pc = 0x1D46D68u;
    ctx->pc = 0x1D46D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46D68u;
    // 0x1d46d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45DA8u;
    sub_01D45DA8_0x1d45da8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D46D70u;
}
