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

// Function: sub_01DCC100
// Address: 0x1dcc100 - 0x1dcc190
void sub_01DCC100_0x1dcc100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCC100_0x1dcc100");
#endif

    switch (ctx->pc) {
        case 0x1dcc11cu: goto label_1dcc11c;
        case 0x1dcc134u: goto label_1dcc134;
        case 0x1dcc15cu: goto label_1dcc15c;
        default: break;
    }

    ctx->pc = 0x1dcc100u;

    // 0x1dcc100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcc100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcc104: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcc104u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc108: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dcc108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dcc10c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcc10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcc110: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcc110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcc114: 0xc772ec6  jal         func_1DCBB18
    ctx->pc = 0x1DCC114u;
    SET_GPR_U32(ctx, 31, 0x1DCC11Cu);
    ctx->pc = 0x1DCC118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC114u;
    // 0x1dcc118: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB18u, 0x1DCC114u, 0x1DCC11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC11Cu;
label_1dcc11c:
    // 0x1dcc11c: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcc11cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dcc120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dcc124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc128: 0x8dee00f0  lw          $t6, 0xF0($t7)
    ctx->pc = 0x1dcc128u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 240)));
    // 0x1dcc12c: 0xc772ede  jal         func_1DCBB78
    ctx->pc = 0x1DCC12Cu;
    SET_GPR_U32(ctx, 31, 0x1DCC134u);
    ctx->pc = 0x1DCC130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC12Cu;
    // 0x1dcc130: 0x8dc4002c  lw          $a0, 0x2C($t6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB78u, 0x1DCC12Cu, 0x1DCC134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC134u;
label_1dcc134:
    // 0x1dcc134: 0x8e0f024c  lw          $t7, 0x24C($s0)
    ctx->pc = 0x1dcc134u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x1dcc138: 0x8c460048  lw          $a2, 0x48($v0)
    ctx->pc = 0x1dcc138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1dcc13c: 0x8de50084  lw          $a1, 0x84($t7)
    ctx->pc = 0x1dcc13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1dcc140: 0x8f848030  lw          $a0, -0x7FD0($gp)
    ctx->pc = 0x1dcc140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc144: 0x24c600e0  addiu       $a2, $a2, 0xE0
    ctx->pc = 0x1dcc144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x1dcc148: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dcc148u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dcc14c: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x1dcc14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x1dcc150: 0x25efd780  addiu       $t7, $t7, -0x2880
    ctx->pc = 0x1dcc150u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956928));
    // 0x1dcc154: 0xc772edc  jal         func_1DCBB70
    ctx->pc = 0x1DCC154u;
    SET_GPR_U32(ctx, 31, 0x1DCC15Cu);
    ctx->pc = 0x1DCC158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC154u;
    // 0x1dcc158: 0xc5ec0000  lwc1        $f12, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB70u, 0x1DCC154u, 0x1DCC15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC15Cu;
label_1dcc15c:
    // 0x1dcc15c: 0x8f8d8030  lw          $t5, -0x7FD0($gp)
    ctx->pc = 0x1dcc15cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc160: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1dcc160u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcc164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcc164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcc168: 0x8daf02b8  lw          $t7, 0x2B8($t5)
    ctx->pc = 0x1dcc168u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 696)));
    // 0x1dcc16c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dcc16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcc170: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x1dcc170u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x1dcc174: 0xf7080  sll         $t6, $t7, 2
    ctx->pc = 0x1dcc174u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1dcc178: 0xadaf02b8  sw          $t7, 0x2B8($t5)
    ctx->pc = 0x1dcc178u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 696), GPR_U32(ctx, 15));
    // 0x1dcc17c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1dcc17cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1dcc180: 0xadcc033c  sw          $t4, 0x33C($t6)
    ctx->pc = 0x1dcc180u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 828), GPR_U32(ctx, 12));
    // 0x1dcc184: 0xadcc02bc  sw          $t4, 0x2BC($t6)
    ctx->pc = 0x1dcc184u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 700), GPR_U32(ctx, 12));
    // 0x1dcc188: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC188u;
        // 0x1dcc18c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC190u;
}
